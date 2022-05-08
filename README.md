# SRM CGPA/SGPA Calculator
Calculator that takes grade points for each subject in each semester and calculates your SGPA for each semester and overall CGPA.

## ```struct semester_result```
It is a data type to store each semester result. It contains:
- ```float sgpa```: It stores the SGPA of the semester.
- ```int semester_credit```: It stores the total credits of the semester.

## Function ```sgpa_calculator```
- Input ```int semester```: The input is the semester number.
- Output ```struct semester_result```: The ouput is the semester result with sgpa and semester credit.
- For each semester it takes input from user ```int number_of_subjects```, ```int grades``` and  ```int credits```.
- ```credits``` and ```grades``` are dynamic array whose size depeneds on ```int number_of_subjects``` and stores the credit and grade points earned for each subject.
- After taking this input the function calculates the sgpa, it prints the ```sgpa``` for this semester and then returns ```struct semester_result```.

## Function ```main```
The main function is where the program starts execution.
- It takes number of semester as input and stores it in ```int number_of_semesters```.
- For each semester it runs the ```sgpa_calculator``` function and stores the result from this function in ```float cgpa_num``` and ```float cgpa_deno```.
- After running ```sgpa_calculator``` for each semester it calculates the ```cgpa``` and prints it.
