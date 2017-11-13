using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ASP_CS_1_2
{

    interface IShow
    {
        void Show();
    }


    class Shape 
    {
        public string Colour;
        public virtual void Show() { Console.WriteLine("Hello shape"); }

    }

    class Point : Shape
        {
        // private int X = 99, Y = 11;

        public int X { get; set; }
        public int Y { get; set; }

        public Point() { }

        public Point(int Xi, int Yi)
        {
            X = Xi;
            Y = Yi;
        }

        public override void Show()

        {
            Console.WriteLine("Hello Point");

        }
     
    }//Po

    class Rectangle : Shape, IShow
    {

        public override void Show()
        {
            Console.WriteLine("Hello Rectangle");
        }

    }

    class Triangle : Shape, IShow
    {
        public override void Show()
        {
            Console.WriteLine("Hello Triangle");

        }
    }


    class ASP_CS_1_2
    {
        static void Main(string[] args)
        {
            Point P = new Point();
            P.X = 99;
            P.Y = 11;

            //P.show();
            //P.Show();

            Shape [] S= new Shape[10];

            S[0] = new Triangle();
            S[1] = new Rectangle();
            S[2] = new Point();

           // S[0] = T;


            for ( int i=0; i<3; i++)
            {
                if( S[i] is IShow)
                {
                    S[i].Show();
                }
                else
                {
                    Console.WriteLine("Not IShow");
                }
            }
            



            Console.ReadLine();
        }
    }
}
