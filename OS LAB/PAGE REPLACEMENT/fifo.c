#include <stdio.h>
int main()
{
  int inputstring[] = {7,0,1,2,0,3,0,4,2,3,0,3,1,2,0};
  int pageFaults = 0;
  int frames = 4;
  int i, j, s, pages;
  pages = sizeof(inputstring)/sizeof(inputstring[0]);
  printf("Incoming \t Frame 1 \t Frame 2 \t Frame 3 \t Frame 4");
  int temp[frames];
  for(i = 0; i < frames; i++)
    temp[i] = -1;
  for(i = 0; i < pages; i++){
    s = 0;
    for(j = 0; j < frames; j++){
      if(inputstring[i] == temp[j]){
        s++;
        pageFaults--;
      }
    }
    pageFaults++;
    if((pageFaults <= frames) && (s == 0))
      temp[i] = inputstring[i];
    else if(s == 0)
      temp[(pageFaults - 1) % frames] = inputstring[i];
    printf("\n%d\t\t\t",inputstring[i]);
    for(j = 0; j < frames; j++){
      if(temp[j] != -1)
        printf(" %d\t\t\t", temp[j]);
      else
        printf(" - \t\t\t");
    }
  }
  printf("\n\nTotal Page Faults:\t%d\n", pageFaults);
  return 0;
}
