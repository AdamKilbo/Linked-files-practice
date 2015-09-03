void subtract()
{
	std::cout << "please input two numbers, and the difference will be calculated." << std::endl;

	int InputA, InputB, Difference;

	std::cin >> InputA >> InputB;

	Difference = InputA - InputB;

	std::cout << "the difference of " << InputA << " and " << InputB << " is " << Difference << std::endl;
}