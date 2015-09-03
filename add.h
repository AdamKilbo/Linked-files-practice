void add() //this function adds two numbers together
{
	std::cout << "please enter two numbers that you would like to add." << std::endl;

	int InputA, InputB, sum;

	std::cin >> InputA >> InputB;

	sum = InputA + InputB;

	std::cout << "The sum of " << InputA << " and " << InputB << " is " << sum << std::endl;
}