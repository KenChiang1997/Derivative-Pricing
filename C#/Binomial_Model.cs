using System;



namespace BinomalProcess
{
    internal class Model{

        static double[,] Stock_Binomial_Model(double s0, double u,double d,int n)
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
        
    }
}