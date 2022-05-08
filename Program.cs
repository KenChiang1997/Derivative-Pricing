using System;


namespace Introduction // Note: actual namespace depends on the project name.
{
    
    internal class Program
    {
        
        static void printnumber()
        {
            byte  Number     = 100;
            int   Count      = 2;
            float TotalPrice = 20.95f;
            // var   Blooen     = false;
            var  StringType  = "Ken";

            Console.WriteLine("I     got "+Number+" on my math test");
            Console.WriteLine("int type: "   +Count);
            Console.WriteLine("Float Type: " +TotalPrice);
            Console.WriteLine("My Name is: " +StringType);
        }

        static void ReadLine()
        {
            Console.WriteLine("Enter a Number: ");
            double num1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter another Number: ");
            double num2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Sun of the number = "+(num1+num2));
        }

        static void PraticeOperator()
        {
            var a = 10;
            var b = 30;
            Console.WriteLine(a+b);
            Console.WriteLine((b/a)*a + 30);
        }

        static void PraticeArray()
        {
            int[] luckyNumbers = {4, 8, 12, 15, 16};
            string[] friends = new string[3]; //到3為止
            friends[0] = "Ken";
            friends[1] = "Kevin";
            friends[2] = "Annie";

            Console.WriteLine(luckyNumbers[0]);
            Console.WriteLine(luckyNumbers[1]);
            Console.WriteLine(friends[0]);
            Console.WriteLine(friends[2]);
        }

        static void Method(string name, int age)
        {
            Console.WriteLine(name);
            Console.WriteLine(age);
        }
        
        static double PlusMethod(int a ,int b)
        {
            double result = a * b ;
            return result;
        }

        static void Pratice_IF()
        {
            Console.WriteLine("Plz Input your First Number:");
            double a = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Plz Input your Second Number:");
            double b = Convert.ToDouble(Console.ReadLine());

            if(a > 30 && b >30 )
            {
                Console.WriteLine("Your input are both bigger than 30");
            }
            else if(a > 30 || b >30)
            {
                 Console.WriteLine("Only one input is  bigger than 30");
            }
            else
            {
                Console.WriteLine("Your input number is tooo small ~ ");
            }
        }

        static string SwitchGetDay(int number)
        {
            string dayName;
            switch(number)
            {
                case 0:
                    dayName = "Sunday";
                    break;
                case 1:
                    dayName = "Monday";
                    break;
                case 2:
                    dayName = "Tuesday";
                    break;
                case 3:
                    dayName = "Wednesday";
                    break;
                case 4:
                    dayName = "Thursday";
                    break;
                case 5:
                    dayName = "Friday";
                    break;
                case 6:
                    dayName = "Saturday";
                    break;
                default:
                    dayName = "Invalid Number";
                    break;
            }
            return dayName ;
        }

        static void Pratice_While_Loop()
        {
            int index = 1;
            while(index<=3)
            {
                Console.WriteLine("Print the index: "+index);
                index +=1;
            }
        }

        static void Guessing_Game(int top,int button)
        {
            Random rd = new Random() ;
            double secretNumber = rd.Next(top,button);

            int guess = 0;

            while( guess != secretNumber)
            {
                Console.Write("Enter Your Guess: ");
                guess = Convert.ToInt16(Console.ReadLine());
                if(guess > secretNumber)
                {
                    Console.WriteLine("Enter Too High");
                }
                else if(guess < secretNumber)
                {
                    Console.WriteLine("Enter Too Low");
                }
                else
                {
                    Console.WriteLine("Congrats! You Win");
                }
            }
        }

        static void Pratice_For_Loop(double[] Vector)
        {
            int rows = Vector.GetLength(0);

            for (int i = 0; i<rows ;i++)
            {
                Console.WriteLine(Vector[i]);
            }
        }

        static double[] PlusArray(double[] vector1 ,double[] vector2)
        {
            
            int vector1_rows = vector1.GetLength(0);
            int vector2_rows = vector2.GetLength(0);

            double[] Array = new double[vector1_rows];

            if( vector1_rows == vector2_rows)
            {
                for(int i=0; i<vector1_rows;i++)
                {
                    Array[i] = vector1[i] + vector2[i];
                }
            }
            else
            {
                Console.WriteLine("Dimension Does Not Match");
            }

            return Array;
        }

        static double Exponent(int baseNumber, int powNum)
        {
            double Answer = baseNumber;
            int i = 0;
            if(powNum==0)
            {
                Answer = 1 ;
            }
            else
            {
                while(i<powNum-1)
                {
                    Answer *= baseNumber;
                    i++;
                }
            }
            return Answer;
        }

        static int[,] Pratice_2dArray()
        {
            int[,] numberGrid = {
                {1,2,7},
                {3,4,6},
                {5,6,6},
                {7,8,3},   
            };

            return numberGrid;
        }


        static double[,] Binomial_Model(double s0, double u,double d,int n)
        {
            double[,] Binomial_Process = new double[n+1,n+1] ;

            for(int i = 0 ; i < n+1 ; i++) // columns
            {
                for(int j = 0 ; j<i+1 ; j++) // rows
                {
                    double st = s0 * Math.Pow(u,(i-j)) * Math.Pow(d,j);
                    Binomial_Process[j,i] = st ;
                }
            }

            return Binomial_Process;
        }

        static void PrintArray(double[,] Array)
        {
            int columns_range = Array.GetLength(0);
            int rows_range    = Array.GetLength(1);

            for(int i = 0 ; i < columns_range ; i++) // rows
            {
                for(int j = 0 ; j < rows_range ; j++) // columne
                {
                    Console.Write( Math.Round(Array[i,j],2) + " ");
                    if(j == rows_range-1)
                    {
                        Console.Write("\n");
                    }
                }
            }
        }


        static void Main(string[] args)
        {   

            double s0 = 100 ;
            double u  = 1.05 ;
            double d  = 1-0.05 ;
            int n = 10 ;
            double[,] array = Program.Binomial_Model(s0,u,d,n) ;
            
            Program.PrintArray(array);

            // string name = "Ken";
            // var age = 21 ;
            // Console.WriteLine("Hello World ~~ !");
            // Console.WriteLine("I love Annie ~~ \n");
            // Console.WriteLine(Program.Pratice_2dArray()[0,2]);
            


            // -- Pratice Function --
            // Console.WriteLine(Program.PlusMethod(10,10));
            // Console.WriteLine(a);
            // Program.ReadLine();
            // Program.PraticeArray();
            // Program.Method(name,age);

            // Console.WriteLine(Program.SwitchGetDay(1));
            // Console.WriteLine(Program.SwitchGetDay(2));

            // Program.Pratice_While_Loop();
            // Program.Guessing_Game(10,20);
            // Program.Pratice_For_Loop(a);   


            // double[] a={4,2,3,1};
            // double[] b={1,2,3,4};
            // double[] c = Program.PlusArray(a,b);  // add loops 
            // Program.Pratice_For_Loop(c); //print loop's values


            // Console.WriteLine(Exponent(3,2));
        }
    }

}
