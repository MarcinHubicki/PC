#include <iostream>

//int main()
//{
//    
//    int x[1500];
//     double y[1500];
//    int a=2,c=3,m=12398;
//    double ys=0.0,ys2=0.0,ys3=0.0;
//    double ysr,ysr2,ysr3;
//    double mr = double(m);
//    x[0]=5;
//    for(int i =1 ; i < 1500 ; i ++)
//    {
//    x[i]= (a*x[i-1] + c) % m;
//    }
//    for( int j= 0; j< 1500 ; j++)
//    {
//        // std::cout<<"x="<<x[j]<<" ";
//         y[j]= double(x[j])/mr;
//        // std::cout<<"y="<<y[j]<<" ";
//         ys = ys+ y[j];
//         ys2 = ys2 + y[j]*y[j];
//         ys3 = ys3 + y[j]*y[j]*y[j];
//         } 
//    
//    ysr = ys / 1500;
//    ysr2 = ys2 / 1500;
//    ysr3 = ys3 / 1500;
//    std::cout<<std::endl;
//    //std::cout<<"y sr ="<<ysr<<" ";
//     //   std::cout<<"y sr 2 ="<<ysr2<<" ";
//      //      std::cout<<"y sr 3 ="<<ysr3<<" ";
//            
//    int nt[10];
//    for (int b= 0 ; b < 10 ; b++)
//    {
//        nt[b] = 0;
//        }
//        for(int f=0; f < 1500; f++)
//        {
//                nt[int(y[f]/0.1)]++;
//                }
//      for (int b= 0 ; b < 10 ; b++)
//    {
//        std::cout<<nt[b]<<" ";
//        }
//    
//    double x2=0.0;
//      for (int b= 0 ; b < 10 ; b++)
//    {
//        x2=x2+((nt[b] - 150.0)* (nt[b] - 150.0))/150.0;
//        }
//    std::cout<<std::endl<<x2;
//    
//    
//    
//    system("pause");
//    return 0;
//}
