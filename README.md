# Only-You-Can-Prevent-Forest-Fires
CS1021 Lab 2

## Introduction
Wildfires are destructive and deadly. Some wildfires are natural – they function to clean out old growth on forest floors – while others are the result of human behavior – leaving a campfire unattended, arson, etc. Wildfires are common in climates that are dry but places with moderate climates are not entirely safe. Cincinnati suffered from a forest fire in the early 1990s. I could smell the smoke from my house!

As forests burn, carbon dioxide is emitted. [In 2020, for every acre of forest that burned in California, approximately 26.7 metric tons of carbon dioxide was emitted](https://news.bloomberglaw.com/environment-and-energy/californias-2020-wildfire-emissions-akin-to-24-million-cars).

Your programming task in this lab is to create the *Forestly* app, a forest fire statistics calculator. Your calculator will take four (4) inputs:
1. a year,
2. the number of acres burned by forest fires in that year,
3. a second year, and
4. the number of acres burned by forest fires in that year
and will
1. [calculate the increase/decrease](https://www.mathsisfun.com/numbers/percentage-change.html) in acres burned between the first and second years,
2. calculate the carbon dioxide emissions for the first and second years, and
3. print the results of those calculations on the console (Note: You do not need to format your outputs using output manipulators -- the default output format is expected!).

Please be sure to read the entire lab document before beginning!

Good luck and have fun!

## Program Design Task
As my dad always says, "Measure once and cut twice." *Before* you start writing code, please write the pseudocode for your implementation of the Forestly application.

## Program Design Requirements
Your pseudocode or flow chart must describe the entirety of the solution. You may choose to write the flow chart or the pseudocode at any level of detail but, remember, this is a tool for you! Your pseudocode or flow chart must include a description of how you plan
1. to calculate the increase/decrease in acres burned in the two years,
2. to calculate the carbon dioxide emissions per year for each of the two years, and
3. to seek input from the user and present output to the console.

## Programming Task
If you are a Windows user, begin with the skeleton code in this repository.  Your programming task is to write Forestly to prompt the user for four (4) different inputs
1. a year,
2. the number of acres burned by forest fires in that year,
3. a second year, and
4. the number of acres burned by forest fires in that year
(in that order), calculate
1. the percent increase/decrease in acres consumed by forest fire between the two years
2. the carbon dioxide emissions in each of those years
and output the results of the calculations in the following format:

```
In year <first year entered>, forest fires generated <result of calculation> tons of carbon dioxide.

In year <second year entered>, forest fires generated <result of calculation> tons of carbon dioxide.

Between <first year entered> and <second year entered>, there was a <result of calculation>% increase in acres consumed by forest fires.
```

Your program should seek user input with the following prompts:

```
Enter the first year:

Enter the acres consumed by forest fire that year:

Enter the second year:

Enter the acres consumed by forest fire that year:
```

You may assume
1. The first year that the user enters will precede the second year they enter.
2. The acres consumed by forest fire each year are whole numbers.
3. The number of acres burned in the first year will be less than the number of acres burned in the second year.
4. The carbon dioxide emissions per acre of burned forest is constant, 26.7.

Example *Forestly* input and output (text in bold is the user's input):

```
Enter the first year: 1995

Enter the acres consumed by forest fire that year: 2000

Enter the second year: 2000

Enter the acres consumed by forest fire that year: 2100

In year 1995, forest fires generated 53400 tons of carbon dioxide.

In year 2000, forest fires generated 56070 tons of carbon dioxide.

Between 1995 and 2000, there was a 5% increase in acres consumed by forest fires.
```

*Note:* Your program will be tested against other test cases. Your program must compute properly in all cases in order to receive full points! Make sure that you check the autograder to make sure that your program behaves as expected.

## Critical Thinking Task
*Type checking* a program written in a high-level programming language can catch lots of bugs before the application is released to users. Your critical thinking task is to answer the following three questions:
1. What is the definition of type? (Hint: there are two parts to the definition)
2. What is the difference between a strongly and weakly typed high-level programming language?
3. Why do applications written in a strongly typed high-level programming language usually have fewer bugs than applications written in weakly typed high-level programming languages?

## Critical Thinking Requirement
Your submission must include answers for all three prompts. Your submission cannot be more than 200 words and you may use resources from outside class. All references to external resources must be properly documented and formatted. The choice of formatting for external references is up to you, but you may find it helpful to consult the Purdue OWL for help (Links to an external site.). The Purdue OWL also has extensive information on ways to avoid plagiarism (Links to an external site.).

## Deliverables
1. The pseudocode describing the algorithm of your Forestly program in PDF format (named `design.pdf`).
2. The C++ source code for your Forestly application (named `Forestly.cpp`).
3. A written response to the three questions in the Critical Thinking Task in PDF format (named `type.pdf`.

## Related Learning Objectives
1. Students will understand the difference between a strongly and weakly typed programming language.
2. Students will effectively use named constants to increase code readability.
3. Students will be able to use the auto type.
4. Students will be able to define type.
5. Students will be able to use basic arithmetic operators on primitive types.
6. Students will understand when floating-point and decimal multiplication/division occur.
7. Students will be able to declare and use variables of primitive types.
8. Students will be able to use an assignment statement to modify a variable.
