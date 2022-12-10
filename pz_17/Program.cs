using System;

namespace pz_17
{
    internal class Program
    {
        static void Main(string[] args)
        {
            unsafe {
                string text = Console.ReadLine();
                int space = 0;
                fixed (char *length = text) {
                    for (int i = 0; length[i] != 0; i++)
                        if(length[i] == ' ')
                        {
                            space++;
                        }
                        
                }
                Console.WriteLine($"Количество пробелов в строке: {space}");
                

            }
            
        }
    }
}
