

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int i;
  int marks1 = 0;
  if(gender == 'b')
        i = 0;
  else {
  i = 1;
  }
  for(;i<number_of_students;i=i+2)
  {
      marks1 += marks[i];
  }
  return marks1;
}

