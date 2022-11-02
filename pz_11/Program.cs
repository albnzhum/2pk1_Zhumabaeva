using System;

namespace pz_11
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите ссылку в формате https//example.com");
            string link = Console.ReadLine();

            if (link.Contains("https//")) //проверка на правильный ввод ссылки
            {
                string a = link.Substring(link.IndexOf('.')+1); //извлекаем подстроку до начала домена
                string domen = a.Remove(a.IndexOf('/')); //извлекаем из 1-й подстроки все остальное
                Console.WriteLine("Ваш домен - " + domen);

            }
            else
            {
                Console.WriteLine("Введите правильную ссылку");
                Console.ReadLine();

            }
            
        }
    }
}
