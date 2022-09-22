using System;

namespace Zhumabaeva
{
    internal class Program
    {
        static void Main(string[] args)
        {
            char b = 'f';
            char sym = '#';

            //первое задание
            Console.WriteLine("Первое задание");
            for (int i = 20; i <= 100; i += 4)
            {
                Console.WriteLine(i);
            };

            //второе задание
            Console.WriteLine("\nВторое задание");
            for (int i = 0; i <= 7; i++)
            {

                Console.Write($"{b} ");
                b++;
            };

            // третье задание
            Console.WriteLine("\n\nТретье задание");
            for (var i = 0; i < 6; i++)
            {
                for (var j = 0; j < 3; j++)
                {
                    Console.Write(sym);
                }
                Console.WriteLine(sym);
            }

            //четвертое задание
            Console.WriteLine("\nЧетвертое задание");
            for (int i = 0; i <= 100; i += 1)
            {
                if (i % 11 == 0)
                {
                    Console.Write($"{i} ");
                }

            }

            //пятое задание
            Console.WriteLine("\nПятое задание"); //извините у меня была проблема с этим, я не могу понять как правильно это записать 
            for (int i = 1, j = 40; j - i != 19; i++, j--)
            {
                Console.WriteLine(i + " " + j);
            }
        }
    }
}
