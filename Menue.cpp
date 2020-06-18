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
                        std::cout <<"please enter value for another Point\n";
                        std::cout << "x= ";
                        std::cin >> xp;
                        std::cout << "y= ";
                        std::cin >> yp;
                        std::cout << "z= ";
                        std::cin >> zp;
                        Point p1(xp,yp,zp);
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
                        std::cout << " Direction of Vector is= "<<vector.directionVector();
                    }
                    if (operation == 3 ){}
                    if (operation == 4 ){}
                    if (operation == 5 ){}
                    if (operation == 6 ){}
                    if (operation == 7 ){}
                    if (operation == 8 ){}
                    if (operation == 9 ){}
                    if (operation == 10 ){}
                    if (operation == 11 ){}

                    std::cout << "\nif are you continue for Point operation pleas enter 'y' for break enter 'n' \n";
                    std::cin>>sV; //чете дали да се продължи с вектори
                }while (sV!='n');
                break;
            case 3:std::cout<<"";
                break;
            case 4:
                break;
            case 5:
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
              << " 3 for difference 2 Vector\n"//todo
              << " 4 for is null  Vector\n"//todo
              << " 5 for is parallel  Vector\n"//todo
              << " 6 for is perpendicular Vector\n"//todo
              << " 7 for sum Vector\n"//todo
              << " 8 for multiply Vector whit real digit\n"//todo
              << " 9 for scalar multiply of Vector\n"//todo
              << " 10 for Vector multiply 2 Vector\n"//todo
              << " 11 for multiply 3  Vector\n";//todo
    return 0;
}
