using System;
using System.IO;
using System.Text.RegularExpressions;

namespace _2text
{
    internal class Program
    {
        static void Main(string[] args)
        {
            FileStream file = new FileStream("text.txt", FileMode.Open, FileAccess.Read);
            StreamReader reader = new StreamReader(file);
            //Console.WriteLine(reader.ReadToEnd());

            string text = reader.ReadToEnd();
            file.Close();

            string Pattern = @"(\d+[.]\d+[.]\d+[.]\d+\s)";

            Console.WriteLine("IP-адреса:");
            Regex regex = new Regex(Pattern);
            foreach (Match match in regex.Matches(text))
            {
                Console.WriteLine(match.Value);
            }
            Console.WriteLine("\nДаты:");

            string Date = @"(\d+[/]\w+[/]\d+)";

            Regex regex2 = new Regex(Date);
            foreach (Match match in regex2.Matches(text))
            {
                Console.WriteLine(match.Value);
            }

        }
    }
}
