void add()
{
	std::cout << "please enter two numbers that you would like to add." << std::endl;
	int InputA, InputB;
	std::cin >> InputA >> InputB;
	int sum;
	sum = InputA + InputB;
	std::cout << "The sum of " << InputA << " and " << InputB << " is " << sum << std::endl;
}