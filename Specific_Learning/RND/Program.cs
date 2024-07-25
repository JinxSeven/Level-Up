// See https://aka.ms/new-console-template for more information
long number = 12345678952636655;
try {
    short output = Convert.ToInt16(number);
} catch (OverflowException oe) {
    Console.WriteLine("Yay, you caught an exception!" + oe.Message);
} finally {
    Console.WriteLine("{0} is a {1}", number, number.GetType());
}

