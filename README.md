# Only-You-Can-Prevent-Forest-Fires
CS1021 Lab 2

Lab 2 - Only You Can Prevent Forest Fires
Lab 2 due on January 31st and 11:59pm.

Introduction
Wildfires are destructive and deadly. Some wildfires are natural – they function to clean out old growth on forest floors – while others are the result of human behavior – leaving a campfire unattended, arson, etc. Wildfires are common in climates that are dry but places with moderate climates are not entirely safe. Cincinnati suffered from a forest fire in the early 1990s. I could smell the smoke from my house!

As forests burn, carbon dioxide is emitted. In 2020, for every acre of forest that burned in California, approximately 26.7 metric tons of carbon dioxide was emitted (Links to an external site.).

Your programming task in this lab is to create the Forestly app, a forest fire statistics calculator. Your calculator will take four (4) inputs:

a year,
the number of acres burned by forest fires in that year,
a second year, and
the number of acres burned by forest fires in that year
and will

calculate the increase/decrease (Links to an external site.) in acres burned between the first and second years,
calculate the carbon dioxide emissions for the first and second years, and
print the results of those calculations on the console (Note: You do not need to format your outputs using output manipulators -- the default output format is expected!).
Please be sure to read the entire lab document before beginning!

Good luck and have fun!

 

Program Design Task
As my dad always says, "Measure once and cut twice." Before you start writing code, please write the pseudocode for your implementation of the Forestly application.

Program Design Requirements
Your pseudocode or flow chart must describe the entirety of the solution. You may choose to write the flow chart or the pseudocode at any level of detail but, remember, this is a tool for you! Your pseudocode or flow chart must include a description of how you plan

to calculate the increase/decrease in acres burned in the two years,
to calculate the carbon dioxide emissions per year for each of the two years, and
to seek input from the user and present output to the console.
Programming Task
If you are a Windows developer, begin your solution with this skeleton  Download this skeleton. If you are a macOS developer, begin your solution with this skeleton  Download this skeleton. If you are a Linux developer, please speak with me! Your programming task is to write Forestly to prompt the user for four (4) different inputs

a year
the number of acres consumed by forest fire that year
a year
the number of acres consumed by forest fire that year
(in that order), calculate

the percent increase/decrease in acres consumed by forest fire between the two years
the carbon dioxide emissions in each of those years
and output the results of the calculations in the following format:

In year <first year entered>, forest fires generated <result of calculation> tons of carbon dioxide.

In year <second year entered>, forest fires generated <result of calculation> tons of carbon dioxide.

Between <first year entered> and <second year entered>, there was a <result of calculation>% increase in acres consumed by forest fires.

Your program should seek user input with the following prompts:

Enter the first year:

Enter the acres consumed by forest fire that year:

Enter the second year:

Enter the acres consumed by forest fire that year:

You may assume

The first year that the user enters will precede the second year they enter.
The acres consumed by forest fire each year are whole numbers.
The number of acres burned in the first year will be less than the number of acres burned in the second year.
The carbon dioxide emissions per acre of burned forest is constant, 26.7.
Example Forestly input and output (text in bold is the user's input):

Enter the first year: 1995

Enter the acres consumed by forest fire that year: 2000

Enter the second year: 2000

Enter the acres consumed by forest fire that year: 2100

In year 1995, forest fires generated 53400 tons of carbon dioxide.

In year 2000, forest fires generated 56070 tons of carbon dioxide.

Between 1995 and 2000, there was a 5% increase in acres consumed by forest fires.

Note: Your program will be tested against other test cases. Your program must compute properly in all cases in order to receive full points! Make sure that you check the autograder to make sure that your program behaves as expected.

Critical Thinking Task
Type checking a program written in a high-level programming language can catch lots of bugs before the application is released to users. Your critical thinking task is to answer the following three questions:

What is the definition of type? (Hint: there are two parts to the definition)
What is the difference between a strongly and weakly typed high-level programming language?
Why do applications written in a strongly typed high-level programming language usually have fewer bugs than applications written in weakly typed high-level programming languages?
Critical Thinking Requirement
Your submission must include answers for all three prompts. Your submission cannot be more than 200 words and you may use resources from outside class. All references to external resources must be properly documented and formatted. The choice of formatting for external references is up to you, but you may find it helpful to consult the Purdue OWL for help (Links to an external site.). The Purdue OWL also has extensive information on ways to avoid plagiarism (Links to an external site.).

Deliverables
The pseudocode describing the algorithm of your Forestly program in PDF format (named design.pdf).
The C++ source code for your Forestly application (named Forestly.cpp).
A written response to the three questions in the Critical Thinking Task in PDF format (named type.pdf).

Related Learning Objectives
Students will understand the difference between a strongly and weakly typed programming language.
Students will effectively use named constants to increase code readability.
Students will be able to use the auto type.
Students will be able to define type.
Students will be able to use basic arithmetic operators on primitive types.
Students will understand when floating-point and decimal multiplication/division occur.
Students will be able to declare and use variables of primitive types.
Students will be able to use an assignment statement to modify a variable.
