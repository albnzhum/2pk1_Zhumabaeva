using System;
using System.Drawing;
using System.IO;
using System.Reflection.PortableExecutable;
using System.Runtime.Intrinsics.Arm;
using System.Threading;

namespace pz15
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string emptyString = ""; // пустая строка
            char[] letters; //массив символов
            int linesCount = 0;
            StreamReader file = new StreamReader("test.txt"); //чтение файла

            while (file.EndOfStream != true)
            {
                emptyString += file.ReadToEnd(); //присваиваем весь текст из файла
            }
            letters = emptyString.ToCharArray(); //в массив символов
            Console.WriteLine(emptyString);
            for (int i = 0; i < letters.Length; i++)
            {
                if (letters[i] == '\n')
                {
                    linesCount++; 
                }
            }
            Console.WriteLine($"Количество строк: {linesCount}");
            file.Close();
        }
    }
}
