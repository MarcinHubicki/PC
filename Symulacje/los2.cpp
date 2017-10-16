#include <iostream>

//int main()
//{
//    
//    int x[1500];
//     double y[1500];
//    int a=77,c=51,m=12398;
//    int k5=0;
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
//    std::cout<<std::endl<<x2<<std::endl;
//    
//    //////////////////////////////////////////////////////////////////////////////////////
//    int nt2[10][10];
//    
//    for (int b= 0 ; b < 10 ; b++)
//    {
//    	for (int g=0 ; g < 10; g++)
//    	{
//		
//        nt2[b][g]= 0;
//        }}
//    
//    
//    for(int c=0 ; c  < 1500 ; c=c+2)
//    {
//    	nt2[int(y[c]/0.1)][int(y[c+1]/0.1)]++;
//	}
//    
//   for (int b= 0 ; b < 10 ; b++)
//    {
//    	for (int g=0 ; g < 10; g++)
//    	{
//		if(nt2[b][g]<5){k5++;
//		}
//        std::cout<<nt2[b][g]<<"   ";
//        }
//		std::cout<<std::endl;}
//    
//    double x22 = 0.0;
//    
//     for (int b= 0 ; b < 10 ; b++)
//    {
//    	for (int g=0 ; g < 10; g++)
//    	{
//		
//        x22 = x22 + (((nt2[b][g]-7.5) * (nt2[b][g]-7.5))/7.5);
//        }}
//    
//    std::cout<<std::endl<<"X2 = "<<x22<<"K5 = "<<k5<<std::endl;
//    
//    
//    
//    
//    system("pause");
//    return 0;
//}
