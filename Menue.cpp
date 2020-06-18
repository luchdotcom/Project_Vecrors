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
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                break;

        }
        std::cout << "if are you continue for Point operation pleas enter 'y' for break enter 'n' \n";
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
              << " 11 for multiply 3  Vector\n";
    return 0;
}
