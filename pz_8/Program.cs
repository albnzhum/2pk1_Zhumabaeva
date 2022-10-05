using System;

namespace pz_8
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i, j;
            int[,] array = new int[5, 5]; //основной массив
            Random rnd = new Random();
            int count = 0;


            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    array[i, j] = rnd.Next(0, 199);

                    Console.Write(array[i, j] + " ");
                    if ((array[i, j] > 10) & (array[i, j] < 100))
                    {
                        if (((i / 10 + i % 10) % 2 == 0) & ((j / 10 + j % 10) % 2 == 0))
                        {
                            count++;
                        }

                    }


                }
                Console.WriteLine();


            }

            Console.WriteLine();
            Console.WriteLine($"Количество двухзначных чисел = {count}");
        }
    }
}
