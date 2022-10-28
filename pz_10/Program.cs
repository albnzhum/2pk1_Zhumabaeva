using System;

namespace pz_10
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите строку:");
            string s = Console.ReadLine(); //ввод строки
            Console.WriteLine("Введите количество звездочек: ");
            int n = Convert.ToInt32(Console.ReadLine()); // количество звездочек 
            for (int i = 0; i < s.Length; i++)
            {
                Console.Write(s[i] + new string('*', n));
            }
        }
    }
}
