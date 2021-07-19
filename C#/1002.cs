using System; 

class URI {

    static void Main(string[] args) { 
            double raio, area;
            raio = Convert.ToDouble(Console.ReadLine());
            area = (raio * raio) * 3.14159;
            Console.WriteLine("A={0:0.0000}", area);

    }

}