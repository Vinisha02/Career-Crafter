Career-Crafter
--------------
Career Crafter provides seven unique resume templates for different job fields. It's an easy-to-use tool to help people make impressive resumes quickly and effectively.

What all it includes
--------------------
This project has seven different templates which were

Job/Internship
Scholarship Application
Fellowship or Research Program Application
Artistic or Creative Position Resume
Applying for College/University Resume
Mass Media/Journalism Resume
Film Making/Entertainment Industry Resume
-->> In our project, we utilized the concept of header files to streamline the integration process. We created separate .cpp files for each resume template and corresponding header files. Additionally, we developed a main2_4.cpp file that consolidates all these templates.

When a user interacts with this program, they are presented with a choice to select a specific resume template based on the job role they are targeting. Using the command prompt, users can navigate through the options, input their data, and customize the template accordingly.

Upon completion, the user is prompted to choose a name for their resume. The program then saves the customized resume as a properly formatted file. We have included seven template files as examples, demonstrating the appearance of resumes created using these .cpp files, those file names are temp1, temp2, temp3.. etc.

How to run the code
-------------------
To run the programs

You have to make a folder where all these files and the CPP that I shared will be stored.
And there is a main2_4.cpp program which is the main function
You have to open Command Prompt
and firstly go into the correct folder, for example
C:\Users\vinis>cd Documents
C:\Users\vinis\Documents>cd OOPT
then after moving to the correct folder enter this command in the command prompt--> this command is for compilation of program.
g++ -o output.exe main2_4.cpp template2.cpp template4.cpp template5.cpp template6.cpp
After Compiling the given code, To run this code Enter--
.\output.exe
And a program will run perfectly, choose which resume you want, and enter your data, lastly, you will be provided with the option Enter the filename to save the resume (e.g., resume.txt): --> After this your resume will be created accordingly with the file name which you have entered.
