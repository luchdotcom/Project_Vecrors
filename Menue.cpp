//
// Created by Lachezar on 18.6.2020 г..
//

#include "Menue.h"

int menu1( ){
  char m;
  int options;
  int operation;

    do {
        PrintMenu();

        std::cin>>options;
        switch ( options) {
            case 1:
                double xp, yp, zp;
                std::cout << "please enter value for Point\n";
                std::cout << "x = ";
                std::cin >> xp;
                std::cout << "y = ";
                std::cin >> yp;
                std::cout << "z = ";
                std::cin >> zp;
                char pChoice;
                do {
                    Point p( xp, yp, zp );
                    std::cout <<"choice operation for Point\n"
                    <<" enter 1 for comparison of 2 points Point\n ";
                    std::cin >> operation;

                    if (operation==1){
                        Point p1=enterPoint();
                        bool f=p==p1;
                        std::cout<<"point is  "<<std::boolalpha<<f<<"\n";
                    }
                    std::cout << "if are you continue for Point operation pleas enter 'y' for break enter 'n' \n";
                    std::cin>>pChoice;
                } while ( pChoice!='n');
                break;
            case 2:
                char sV; //символ за избор дали да се продължи с операциите с вектори
                double xv, yv, zv;
                std::cout << "please enter value for Vector\n";
                std::cout << "x= ";
                std::cin >> xv;
                std::cout << "y= ";
                std::cin >> yv;
                std::cout << "z= ";
                std::cin >> zv;

                do {
                    Vector vector(xv,yv,zv);
                    operationVectors();  //избор на операция с вектори
                    std::cin>>operation;
                    if (operation == 1 ){
                        std::cout<<" length of Vector is = "<<vector.lengthVector();
                    }
                    if (operation == 2 ){
                        try {
                            std::cout << " Direction of Vector is= "<<vector.directionVector();
                        } catch (VectorLengthException& e) {
                            std::cerr<<"Vector Length except occurred here "<<e.what();
                        } catch (...) {
                            std::cerr<<"something wrong\n";
                        }
                    }
                    if (operation == 3 ){
                       Vector v= enterVector();
                       std::cout<<" Difffrence bitwin 2 Vectors is "<<vector-v<<"\n";
                    }
                    if (operation == 4 ){
                        std::cout<<"is the vector zero : "<<std::boolalpha<<vector.nullVector()<<'\n';
                    }
                    if (operation == 5 ){
                        Vector v=enterVector();
                        try {
                            std::cout<< "is the Vector parallel : "<<std::boolalpha<<vector.parallelInVectors(v)<<"\n";
                        } catch (VectorLengthException & e) {
                            std::cerr<<"Vector Length except occurred here "<<e.what();
                        } catch (...) {
                            std::cerr<<"something wrong\n";
                        }
                    }
                    if (operation == 6 ){
                        Vector v=enterVector();
                        try {
                            std::cout<< "is the Vector parallel : "<<std::boolalpha<<vector.perpendicular(v)<<"\n";
                        } catch (VectorLengthException & e) {
                            std::cerr<<"Vector Length except occurred here "<<e.what();
                        } catch (...) {
                            std::cerr<<"something wrong\n";
                        }
                    }
                    if (operation == 7 ){
                        Vector v=enterVector();
                        std::cout<< "sum of two Vectors is = "<<vector+v<<"\n";
                    }
                    if (operation == 8 ){
                        double digit;
                        std::cout << "Please enter digit for multiplication\n digit = ";
                        std::cin>>digit;
                        std::cout <<" result is = "<<vector * digit;
                    }
                    if (operation == 9 ) {
                        Vector v = enterVector();
                        std::cout << "Scalar multiply of two Vectors is = " << vector * v << "\n";
                    }
                    if (operation == 10 ){
                        Vector v = enterVector();
                        Vector result= vector ^ v;
                        std::cout << "Vectors multiply of two Vectors is = " << result << "\n";
                    }
                    if (operation == 11 ){
                        std::cout <<"For second Vector ";
                        Vector v = enterVector();
                        std::cout <<"For third Vector ";
                        Vector v1 = enterVector();
                        std::cout << " Multiply of three Vectors is = " << vector (v,v1) << "\n";
                    }

                    std::cout << "\nif are you continue for Point operation pleas enter 'y' for break enter 'n' \n";
                    std::cin>>sV; //чете дали да се продължи с вектори
                }while (sV!='n');
                break;
            case 3:
                char sL;
                int t;
                int method;

                do {
                    Line *line;
                    std::cout <<"please enter method\n"
                              <<" 1 for wto point \n 2 for Point and Vector";
                    std::cin >> method;
                    if (method==1){
                        Point point1=enterPoint();
                        Point point2= enterPoint();
                        std::cout <<"Please enter time \nt = ";
                        std::cin>>t;
                        line =new Line(point1,point2,t);
                    }
                    if (method ==2){
                        Point point1 = enterPoint();
                        Vector vector = enterVector();
                        std::cout <<"Please enter time \nt = ";
                        std::cin>>t;
                        line = new Line(point1,vector,t);
                    }

                    operationLine();
                    std::cin>>operation;
                    if (operation == 1 ){
                        std::cout <<"Direction line  is "<<line->directionLine();
                    }
                    if (operation == 2 ){
                        std::cout <<"normal Vector is =  "<<line->normalVector(*line);
                    }
                    if (operation == 3 ){
                        Point point1=enterPoint();
                        Point point2= enterPoint();
                        std::cout <<"Please enter time \nt = ";
                        std::cin>>t;
                        Line line1(point1,point2,t);
                        std::cout<<"angle is = "<<line->angelBetweenTwoLines(line1);
                    }
                    if (operation == 4 ){
                        Point point1=enterPoint();
                        Point point2= enterPoint();
                        std::cout <<"Please enter time \nt = ";
                        std::cin>>t;
                        Line line1(point1,point2,t);
                        Line l=*line;
                        bool fl= l|| line1;
                        std::cout <<" point lays of line :  "<<std::boolalpha<< fl;
                    }
                    if (operation == 5 ){
                        Point point2=enterPoint();
                        Line l=*line;
                        std::cout <<" dot lie on the line:  "<<std::boolalpha<<l+point2;
                    }
                    if (operation == 6 ){
                        Point point1=enterPoint();
                        Point point2= enterPoint();
                        std::cout <<"Please enter time \nt = ";
                        std::cin>>t;
                        Line line1(point1,point2,t);
                        Line l=*line;
                        bool fl= l== line1;
                        std::cout <<" do two lines coincide: "<<std::boolalpha<<fl;
                    }
                    if (operation == 7 ){
                        Point point1=enterPoint();
                        Point point2= enterPoint();
                        std::cout <<"Please enter time \nt = ";
                        std::cin>>t;
                        Line line1(point1,point2,t);
                        Line l=*line;
                        bool fl= l && line1;
                        std::cout <<" do two lines coincide: "<<std::boolalpha<<fl;
                    }
                    if (operation == 8 ){
                        Point point1=enterPoint();
                        Point point2= enterPoint();
                        std::cout <<"Please enter time \nt = ";
                        std::cin>>t;
                        Line line1(point1,point2,t);
                        Line l=*line;
                        bool fl= l!= line1;
                        std::cout <<" do two lines coincide: "<<std::boolalpha<<fl;
                    }
                    if (operation == 9 ){
                        Point point1=enterPoint();
                        Point point2= enterPoint();
                        std::cout <<"Please enter time \nt = ";
                        std::cin>>t;
                        Line line1(point1,point2,t);
                        Line l=*line;
                        bool fl= l | line1;
                        std::cout <<" do two lines coincide: "<<std::boolalpha<<fl;
                    }


                    std::cout << "\nif are you continue for Point operation pleas enter 'y' for break enter 'n' \n";
                    std::cin>>sL; //чете дали да се продължи с Line
                }while (sL!='n');
                break;
            case 4:
                char sS;
                int start,end;
                do {
                    Point point1=enterPoint();
                    Vector vector = enterVector();
                    std::cout << "please enter inteval \n start = ";
                    std::cin>>start;
                    std::cout <<"end =";
                    std::cin>>end;
                    std::cout <<" distance =";
                    std::cin>>t;
                    std::cout << "please enter operation\n"
                              << " 1for length of segment\n"
                              << " 2 for middle of Segment   \n"
                              << " 3 for point are lai of Segment \n ";
                    Segment segment(point1,vector,start,end,t);
                    std::cin>>operation;

                    if(operation ==1 ){

                        std::cout <<"length of segment is :"<<segment.segmentLen();
                    }
                    if(operation ==2 ){
                        std::cout <<" middle of Segment is:  "<<segment.segmentMiddle();
                    }
                    if(operation ==3 ){
                        Point point = enterPoint();
                        bool f = segment == point;
                        std::cout <<" middle of Segment is:  "<<std::boolalpha<<f;
                    }

                    std::cout << "\nif are you continue for Point operation pleas enter 'y' for break enter 'n' \n";
                    std::cin>>sS; //чете дали да се продължи с Segment
                } while (sS!='n');
                break;
            case 5:
                char st;
                do {
                    Point point= enterPoint();
                    Point point1= enterPoint();
                    Point point2= enterPoint();
                   int choice= triangleMenu();

                    if (choice ==1){
                        Triangle triangle(point,point1,point2);
                        std::cout << "triangle perimeter  is "<<triangle.perimeter();
                    }
                    if (choice ==2){
                        Triangle triangle(point,point1,point2);
                        std::cout << "area is "<<triangle.area();

                    }
                    if (choice ==3){
                        Point point3 = enterPoint();
                        Triangle triangle(point,point1,point2);
                        bool tr = triangle < point3;
                        std::cout << "Point lay of the triangle "<< std::boolalpha<<tr;
                    }
                    if (choice ==4){
                        Point point3 = enterPoint();
                        Triangle triangle(point,point1,point2);
                        bool tr = triangle >point3;
                        std::cout << "the point in outside the triangle "<< std::boolalpha<<tr;
                    }
                    if (choice ==5){
                        Point point3 = enterPoint();
                        Triangle triangle(point,point1,point2);
                        bool tr = triangle == point3;
                        std::cout << "the point in lies on either side "<< std::boolalpha<<tr;
                    }
                    if (choice ==6){
                        Triangle triangle(point,point1,point2);
                        std::cout << "medicenter  is "<<triangle.mediCenter();
                    }
                    if (choice ==7){
                        Triangle triangle(point,point1,point2);
                        std::cout << "triangle is "<<triangle.kindOfTriangle();
                    }

                    std::cout << "\nif are you continue for Point operation pleas enter 'y' for break enter 'n' \n";
                    std::cin>>st; //чете дали да се продължи с triangle
                }while (st!='n');
                break;
            default:
                break;

        }
        std::cout << "if are you continue for another object pleas enter 'y' for break enter 'n' \n";
        std::cin>>m;
    }while (m!='n');

    return 0;
}

int PrintMenu( ) {

    std::cout<<"please enter object \n"
             << "1 for Point \n"
             << "2 for Vectors\n"
             << "3 for Line \n"
             << "4 for Segment\n"
             << "5 for Triangle\n";


    return 0;
}

int operationVectors( ) {
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
              << " 11 for multiply 3  Vector\n";//todo  check formula
    return 0;
}

Vector enterVector( ) {
    double x, y, z;
    std::cout << "please enter value for Vector\n";
    std::cout << "x= ";
    std::cin >> x;
    std::cout << "y= ";
    std::cin >> y;
    std::cout << "z= ";
    std::cin >> z;
    return Vector(x,y,z);
}

Point enterPoint( ) {
    double x,y,z;
    std::cout <<"please enter value for  Point\n";
    std::cout << "x= ";
    std::cin >> x;
    std::cout << "y= ";
    std::cin >> y;
    std::cout << "z= ";
    std::cin >> z;
    return Point(x,y,z);
}

int operationLine( ) {
    std::cout << "please enter operation\n"
              << " 1for direction of line\n"//todo
              << " 2for normal Vector \n"//todo
              << " 3 for angle of Line \n "//todo
              <<"4 for point  lays on line\n"//todo
              << " 5 for 2 parallel Line\n"//todo
              << " 6 for if two Line match\n "//todo
              << " 7 for if two line a intersect\n"//todo
              << " 8 for if two line a crossed\n "//todo
              << "9 for if two Line is perpendicular\n";//todo
    return 0;
}

int triangleMenu( ) {
    int fun;
    std::cout << "please enter operation\n"
              << " 1 for Perimeter of Triangle\n"
              << " 2 for area of Triangle   \n"//todo
              << " 3 for is the point in the triangle \n "//todo
              << " 4 for is the point in outside the triangle \n"//todo
              << " 5 for the point in lies on either side   \n"//todo
              << " 6 for medicenter of Triangle \n "
              << " 7 for kinde of Triangle \n ";
    std::cin>> fun;
    return fun;
}
