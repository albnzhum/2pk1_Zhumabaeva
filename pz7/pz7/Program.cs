using System;

namespace Pz_7
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] array = new int[10];//объявление массива
            Random rand = new Random();
            for (int i = 0; i < 10; i++)
            {
                array[i] = rand.Next(0, 4); //заполнение массива рандомными числами в диапазоне от 0 до 4
                Console.Write(array[i] + " ");

            }

            for (int i = 0; i > 10; i++)
            {
                if (array[i] == array[i + 1])
                {
                    Console.WriteLine("есть"); //помогите пожалуйста у меня здесь ошибка а я не понимаю почему
                }

            }

        }
    }
}
