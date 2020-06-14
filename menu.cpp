//
// Created by Lachezar on 13.6.2020 г..
//

#include <iostream>
#include "menu.h"

int menu( ) {
    char sym;
    int digit;
    int operation;
    do {

        std::cout<<"please enter object \n"
        << "1 for Point \n"
        << "2 for Vectors\n"
        << "3 for Line \n"
        << "4 for Segment\n"
        << "5 for Triangle\n";

        std::cin >>digit;

        switch (digit ) {


            case 1:  //създаване на обекти от тип Point
                double xp,yp,zp;
                std::cout << "please enter value for point \n";
                std::cout << "x= ";
                std::cin >> xp;
                std::cout << "y= ";
                std::cin >> yp;
                std::cout << "z= ";
                std::cin >> zp;
                char sp;

               // std::cin >>sp;
                do{
                    std::cout << "please enter operation\n"
                              << " 1 for comparison of 2 points Point\n";

                    std::cin >> operation;
                    Point p(xp,yp,zp);
                    if (operation==1){
                       std::cout <<"please enter value for another Point\n";
                        std::cout << "x= ";
                        std::cin >> xp;
                        std::cout << "y= ";
                        std::cin >> yp;
                        std::cout << "z= ";
                        std::cin >> zp;
                        Point p1(sp,yp,zp);
                        bool f=p==p1;
                        std::cout<<"point is  "<<std::boolalpha<<f<<"\n";
                    }

                    std::cout << "if are you continue for Point operation pleas enter 'y' for break enter 'n' \n";
                    std::cin>>sp;
                }while (sp!='n');
                break;
            case 2:  //създаване на обекти от тип Vector
                char s;
                double x, y, z;
                std::cout << "please enter value for Vector\n";
                std::cout << "x= ";
                std::cin >> x;
                std::cout << "y= ";
                std::cin >> y;
                std::cout << "z= ";
                std::cin >> z;

                do {
                    Vector vec(x,y,z);
                    std::cout << "please enter operation\n"
                              << " 1 for length of Vector\n"
                              << " 2 for  direction Vector\n"
                              << " 3 for difference 2 Vector\n"
                              << " 4 for is null  Vector\n"
                              << " 5 for is parallel  Vector\n"
                              << " 6 for is perpendicular Vector\n"
                              << " 7 for sum Vector\n"
                              << " 8 for multiply Vector whit real digit\n"
                              << " 9 for scalar multiply of Vector\n"
                              << " 10 for Vector multiply 2 Vector\n"
                              << " 11 for multiply 3  Vector\n";
                    std::cin >> operation;

                    if ( operation == 1 ) {
                            std::cout<<"length vector is ="<<vec.lengthVector(x,y,z)<<"\n";
                    }
                    if ( operation == 2 ){
                        std::cout<<"direction vector is ="<<vec.directionVector(x,y,z)<<"\n";
                    }
                    if ( operation == 3 ){
                        std::cout << "please enter value for second Vector\n";
                        std::cout << "x= ";
                        std::cin >> x;
                        std::cout << "y= ";
                        std::cin >> y;
                        std::cout << "z= ";
                        std::cin >> z;
                        Vector v2(x,y,z);
                        std::cout << "Difference on two Vectors is =  "<<vec-v2<<"\n";
                    }
                    if ( operation == 4 ){
                        std::cout <<std::boolalpha<<vec.nullVector()<<"\n";
                    }
                    if ( operation == 5 ){
                        std::cout << "please enter value for second Vector\n";
                        std::cout << "x= ";
                        std::cin >> x;
                        std::cout << "y= ";
                        std::cin >> y;
                        std::cout << "z= ";
                        std::cin >> z;
                        Vector v3(x,y,z);
                        std::cout << "Are they parallel "<<std::boolalpha<<vec.parallelInVectors(v3)<<"\n";
                    }
                    if ( operation == 6 ){
                        std::cout << "please enter value for second Vector\n";
                        std::cout << "x= ";
                        std::cin >> x;
                        std::cout << "y= ";
                        std::cin >> y;
                        std::cout << "z= ";
                        std::cin >> z;
                        Vector v3(x,y,z);
                        try {
                            std::cout << "Are they perpendicular "<<std::boolalpha<<vec.perpendicular(v3)<<"\n";
                        } catch (VectorLengthException& e) {
                            std::cerr<<e.what();
                        } catch (...) {
                            std::cerr<< "samting wrong";
                        }
                    }
                    if ( operation == 7 ){
                        std::cout << "please enter value for second Vector\n";
                        std::cout << "x= ";
                        std::cin >> x;
                        std::cout << "y= ";
                        std::cin >> y;
                        std::cout << "z= ";
                        std::cin >> z;
                        Vector v3(x,y,z);
                        std::cout << "Sum on two Vectors is =  "<<vec+v3<<"\n";
                    }
                    if ( operation == 8 ){
                        std::cout << "please enter digit for multiply \n";
                        double dig;
                        std::cin>>dig;
                        std::cout<<"Result is = "<<vec*digit<<"\n";
                    }
                    if ( operation == 9){
                        std::cout << "please enter value for second Vector\n";
                        std::cout << "x= ";
                        std::cin >> x;
                        std::cout << "y= ";
                        std::cin >> y;
                        std::cout << "z= ";
                        std::cin >> z;
                        Vector v9(x,y,z);
                        std::cout << "Scalar multiply on two Vectors is =  "<<vec*v9<<"\n";
                    }
                    if ( operation == 10){
                        std::cout << "please enter value for second Vector\n";
                        std::cout << "x= ";
                        std::cin >> x;
                        std::cout << "y= ";
                        std::cin >> y;
                        std::cout << "z= ";
                        std::cin >> z;
                        Vector v2(x,y,z);
                        Vector res=vec ^ v2;
                        std::cout << "Vector multiply on two Vectors is =  "<<res <<"\n";
                    }
                    if ( operation == 11 ){
                        std::cout << "please enter value for second Vector\n";
                        std::cout << "x2= ";
                        std::cin >> x;
                        std::cout << "y2= ";
                        std::cin >> y;
                        std::cout << "z2= ";
                        std::cin >> z;
                        Vector v2(x,y,z);
                        double x3,y3,z3;
                        std::cout << "please enter value for the third Vector\n";
                        std::cout << "x3= ";
                        std::cin >> x3;
                        std::cout << "y3= ";
                        std::cin >> y3;
                        std::cout << "z3= ";
                        std::cin >> z3;
                        Vector  v3(x3,y3,z3);
                        std::cout << "Vector multiply on three Vectors is =  "<<vec(v2,v3) <<"\n";
                    }

                    std::cout << "if are you continue for Vector operation pleas enter 'y' for break enter 'n' \n";
                    std::cin >> s;
                }while (s!='n');
                break;
                case 3 :
                    char sl;
                    double xl, yl, zl;
                    int method;
                    std::cout <<"please enter method\n"
                    <<" 1 for wto point \n 2 for Point and Vector";
                    std::cin >> method;

                    do {
                        int t;
                        Vector v;
                        Point p1,p2;
                        if (method==1){
                            std::cout << "please enter value for Point 1\n";
                            std::cout << "x= ";
                            std::cin >> xl;
                            std::cout << "y= ";
                            std::cin >> yl;
                            std::cout << "z= ";
                            std::cin >> zl;
                            p1=Point(xl,yl,zl);
                            std::cout << "please enter value for Point 2\n";
                            std::cout << "x= ";
                            std::cin >> xl;
                            std::cout << "y= ";
                            std::cin >> yl;
                            std::cout << "z= ";
                            std::cin >> zl;
                            p2=Point(xl,yl,zl);
                            std::cout <<" distance ";
                            std::cout << "= ";
                            std::cin>>t;
                        }
                        if (method ==2){
                            std::cout << "please enter value for Point 1\n";
                            std::cout << "x= ";
                            std::cin >> xl;
                            std::cout << "y= ";
                            std::cin >> yl;
                            std::cout << "z= ";
                            std::cin >> zl;
                            p2=Point(xl,yl,zl);
                            std::cout << "please enter value for Vector \n";
                            std::cout << "x= ";
                            std::cin >> xl;
                            std::cout << "y= ";
                            std::cin >> yl;
                            std::cout << "z= ";
                            std::cin >> zl;
                            Vector v1(xl,yl,zl);
                            v=v1;
                            std::cout <<" distance ";
                            std::cout << "= ";
                            std::cin>>t;
                        }
                        std::cout << "please enter operation\n"
                        << " 1for direction of line\n"
                        << " 2for normal Vector \n"//todo
                        << " 3 for angle of Line \n "//todo
                        <<"4 for point  lays on line\n"
                        << " 5 for 2 parallel Line\n"
                        << " 6 for if two Line match\n "
                        << " 7 for if two line a intersect\n"
                        << " 8 for if two line a crossed\n "
                        << "9 for if two Line is perpendicular\n";
                        std::cin>>operation;

                        //for direction of line
                        if (operation==1){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout<<line.directionLine()<<" \n";
                            }
                            if  (method ==2){
                                Line line(v,p2,t);
                                std::cout<<line.directionLine()<<"\n";
                            }
                        }

                        //for normal Vector
                      /*  if (operation == 2 ){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout<<line.normalVector()<<" \n";
                            }
                            else if (method ==2){
                                Line line(v,p2,t);
                                std::cout<<line.directionLine()<<"\n";
                            }
                        }*/

                      // for angle of Line

                       /* if (operation == 3 ){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout<<line.angelBetweenTwoLines()<<" \n";
                            }
                            else if (method ==2){
                                Line line(v,p2,t);
                                std::cout<<line.angelBetweenTwoLines()<<"\n";
                            }
                        }*/

                       ///for point  lays on line
                        if (operation == 4 ){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout<<" Please enter value gor Point\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout<<line+p1<<" \n";
                            }
                            else if (method ==2){
                                Line line(v,p2,t);
                                std::cout<<" Please enter value gor Point\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout<<line+p1<<" \n";
                            }
                        }


                       // for 2 parallel Line
                        if (operation == 5 ){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line||Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                            else if (method ==2){
                                Line line(v,p2,t);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line||Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                        }
                        //for if two Line match
                        if (operation == 6 ){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line==Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                            else if (method ==2){
                                Line line(v,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line==Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                        }
                        //for if two line a intersect
                        if (operation == 7 ){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line&&Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                            else if (method ==2){
                                Line line(v,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line&&Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                        }
                        //for if two line a crossed
                        if (operation == 8 ){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line!=Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                            else if (method ==2){
                                Line line(v,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line!=Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                        }
                        //for if two Line is perpendicular
                        if (operation == 9 ){
                            if (method==1){
                                Line line(p1,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line|Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                            else if (method ==2){
                                Line line(v,p2,t);
                                std::cout << "please enter value for Point 1\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p1=Point(xl,yl,zl);
                                std::cout << "please enter value for Point 2\n";
                                std::cout << "x= ";
                                std::cin >> xl;
                                std::cout << "y= ";
                                std::cin >> yl;
                                std::cout << "z= ";
                                std::cin >> zl;
                                p2=Point(xl,yl,zl);
                                std::cout <<" distance ";
                                std::cout << "= ";
                                std::cin>>t;
                                bool res=line|Line(p1,p2,t);
                                std::cout<<std::boolalpha<<res<<" \n";
                            }
                        }
                        std::cout << "if are you continue for Vector operation pleas enter 'y' for break enter 'n' \n";
                        std::cin >> sl;
                       if (sl=='y') {
                           std::cout << "please enter method\n"
                                     << " 1 for wto point \n 2 for Point and Vector";
                           std::cin >> method;
                       }
                    }while (sl!='n');

                break;
            case 4:
                char sy;
                double xs,ys,zs;
                int t,start, end;

                do {
                    Point ps;
                    Vector vs;
                    std::cout << "please enter value for Point 1\n";
                    std::cout << "x= ";
                    std::cin >> xs;
                    std::cout << "y= ";
                    std::cin >> ys;
                    std::cout << "z= ";
                    std::cin >> zs;
                    ps=Point(xs,ys,zs);
                    std::cout << "please enter value for Vector \n";
                    std::cout << "x= ";
                    std::cin >> xs;
                    std::cout << "y= ";
                    std::cin >> ys;
                    std::cout << "z= ";
                    std::cin >> zs;
                    Vector vc(xs,ys,zs);
                    vs=vc;
                    std::cout << "please enter inteval \n start = ";
                    std::cin>>start;
                    std::cout <<"end =";
                    std::cin>>end;
                    std::cout <<" distance =";
                    std::cin>>t;

                    std::cout << "please enter operation\n"
                              << " 1for length of segment\n"
                              << " 2 for middle of Segment   \n"
                              << " 3 for point are lays of Segment \n ";
                              int oper;

                    std::cin>>oper;
                    if (oper==1){
                        Segment segment(ps,vs,start,end,t);
                        std::cout <<"Length of Segment is = "<<segment.segmentLen(segment)<<"\n";
                    }
                    if (oper==2){
                        Segment segment(ps,vs,start,end,t);
                        std::cout <<"middle of Segment is = "<<segment.segmentMiddle()<<"\n";
                    }
                    if (oper==3){
                        Segment segment(ps,vs,start,end,t);
                        std::cout << "please enter value for Point \n";
                        std::cout << "x= ";
                        std::cin >> xs;
                        std::cout << "y= ";
                        std::cin >> ys;
                        std::cout << "z= ";
                        std::cin >> zs;
                        Point pp(xs,ys,zs);
                        bool f=segment==pp;
                        std::cout <<" are it lays Point of Segment "<<std::boolalpha<<f<<"\n";
                    }

                    std::cout<<"if are you continue another object pleas enter 'y' for break enter 'n' \n";
                    std::cin >>sy;
                }while (sy!='n');
                break;

                case 5:
                char st;
                int fun;

                do {
                    double xt, yt, zt;
                    std::cout << "please enter value for Point 1 \n";
                    std::cout << "x= ";
                    std::cin >> xt;
                    std::cout << "y= ";
                    std::cin >> yt;
                    std::cout << "z= ";
                    std::cin >> zt;
                    Point pt(xt,yt,zt);
                    std::cout << "please enter value for Point 2 \n";
                    std::cout << "x= ";
                    std::cin >> xt;
                    std::cout << "y= ";
                    std::cin >> yt;
                    std::cout << "z= ";
                    std::cin >> zt;
                    Point pt1(xt,yt,zt);
                    std::cout << "please enter value for Point 3  \n";
                    std::cout << "x= ";
                    std::cin >> xt;
                    std::cout << "y= ";
                    std::cin >> yt;
                    std::cout << "z= ";
                    std::cin >> zt;
                    Point pt2(xt,yt,zt);
                    Triangle triangle;
                    std::cout << "please enter operation\n"
                              << " 1for Perimeter of Triangle\n"
                              << " 2 for area of Triangle   \n"//todo
                              << " 3 for is the point in the triangle \n "//todo
                              << " 4 for is the point in outside the triangle \n"//todo
                              << " 5 for the point in lies on either side   \n"//todo
                              << " 6 for medicenter of Triangle \n "
                              << " 7 for medicenter of Triangle \n ";
                    std::cin>> fun;
                    if (fun==1){
                        triangle=Triangle(pt,pt1,pt2);
                        std::cout<<" Perimeter is = "<<triangle.perimeter()<<"\n";
                    }
                    if (fun==2){
                        Triangle triangle1(pt,pt1,pt2);
                        std::cout<<" area is = "<<triangle.area()<<"\n";
                    }
                    if (fun==3){
                        Triangle triangle1(pt,pt1,pt2);
                        std::cout << "please enter value for Point 1 \n";
                        std::cout << "x= ";
                        std::cin >> xt;
                        std::cout << "y= ";
                        std::cin >> yt;
                        std::cout << "z= ";
                        std::cin >> zt;
                        Point p3(xt,yt,zt);
                       // bool re= triangle < p3;
                        //std::cout<<" Perimeter is = "<<std::boolalpha<<re;
                    }
                    if (fun==4){
                        Triangle triangle1(pt,pt1,pt2);
                        std::cout << "please enter value for Point 1 \n";
                        std::cout << "x= ";
                        std::cin >> xt;
                        std::cout << "y= ";
                        std::cin >> yt;
                        std::cout << "z= ";
                        std::cin >> zt;
                        Point p3(xt,yt,zt);
                       // bool re= triangle > p3;
                      //  std::cout<<" Perimeter is = "<<std::boolalpha<<re;
                    }
                    if (fun==5){
                        Triangle triangle1(pt,pt1,pt2);
                        std::cout << "please enter value for Point 1 \n";
                        std::cout << "x= ";
                        std::cin >> xt;
                        std::cout << "y= ";
                        std::cin >> yt;
                        std::cout << "z= ";
                        std::cin >> zt;
                        Point p3(xt,yt,zt);
                        bool re= triangle == p3;
                        std::cout<<" Perimeter is = "<<std::boolalpha<<re;
                    }
                    if (fun==6){
                        triangle=Triangle(pt,pt1,pt2);
                        std::cout<<" Perimeter is = "<<triangle.mediCenter()<<"\n";
                    }
                    if (fun==7) {
                        triangle=Triangle(pt,pt1,pt2);
                        std::cout<<" kind  is = "<<triangle.kindOfTriangle()<<"\n";
                    }

                    std::cout<<"if are you continue another object pleas enter 'y' for break enter 'n' \n";
                    std::cin >>st;
                }while (st!='n');
                break;
            default:
                std::cout<<"dont correct operation\n";
                break;
        }
        std::cout<<"if are you continue another object pleas enter 'y' for break enter 'n' \n";
        std::cin >>sym;
        if (sym =='n'){
            std::cout <<"do you want to save the information for yesenter 'y' for break enter 'n'";
            std::cin >>sym;
            if (sym =='y'){
                std::ofstream out("vectors.txt");
                if (!out){
                    std::cerr<<"file vectors.txt not be created";
                    return 2;
                }
                const unsigned Len=100;
                char line[Len+1];
                out.open("main.cpp");
                using namespace std;
                while (out.getline(line,Len)){
                    std::cout<<line<<std::endl;
                }
            }
        }
    }while (sym !='n');

    return 0;
}
int enterLine(){
    double xl,yl,zl;
    Vector v;
    Point p1,p2;
    std::cout << "please enter value for Point 1\n";
    std::cout << "x= ";
    std::cin >> xl;
    std::cout << "y= ";
    std::cin >> yl;
    std::cout << "z= ";
    std::cin >> zl;
    p1=Point(xl,yl,zl);
    std::cout << "please enter value for Point 2\n";
    std::cout << "x= ";
    std::cin >> xl;
    std::cout << "y= ";
    std::cin >> yl;
    std::cout << "z= ";
    std::cin >> zl;
    p2=Point(xl,yl,zl);
    std::cout <<" distance ";
    std::cout << "= ";
   //std::cin>>t;
    return 0;
}

void enterPoint() {
    double x, y, z;
    std::cout << "please enter value  \n";
    std::cout << "x= ";
    std::cin >> x;
    std::cout << "y= ";
    std::cin >> y;
    std::cout << "z= ";
    std::cin >> z;
}