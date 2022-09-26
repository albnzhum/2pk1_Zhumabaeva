using System;

namespace Pz_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите число n: ");
            int n = Convert.ToInt32(Console.ReadLine());
            int f1 = 1;
            int f2 = 1;
            int sum = 0;
            while (n>=sum)
            {
                sum = f1 + f2;
                
                f1 = f2;
                f2 = sum;
                
                
            }
            Console.Write("N-oe число Фибоначчи: ");
            Console.WriteLine("{0} ", sum);

        }
    }
}
