using System;
using System.IO;

namespace pz16
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string emptyString = ""; // пустая строка
            char[] letters; //массив символов
            StreamReader file = new StreamReader("test.txt"); //чтение файла

            while (file.EndOfStream != true)
            {
                emptyString += file.ReadLine(); //присваиваем весь текст из файла
            }
            letters = emptyString.ToCharArray(); //в массив символов
            Console.WriteLine($"Количество символов: {letters.Length}");
            file.Close();
        }
    }
}
