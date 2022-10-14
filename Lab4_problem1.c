#include <stdio.h>

struct MovieData{
    char title[25];
    char director[25];
    int release_year;
    int run_time; 

};

void displayMovieData(struct MovieData* mov);

int main(){
    struct MovieData mov1 = {("Alien Covenant\0"),
                             ("Byron Haskin\0"),
                             (2017),
                             (88)};
    struct MovieData mov2 = {("The Dark Tower\0"),
                             ("Nikolaj Arcel\0"),
                             (2018),
                             (118)};
    
    displayMovieData(&mov1);
    displayMovieData(&mov2);
    return 0;
}

void displayMovieData(struct MovieData* mov){
    printf("Title       :   %s\n", mov->title);
    printf("Director    :   %s\n", mov->director);
    printf("Released    :   %d\n", mov->release_year);
    printf("Running Time:   %d minutes\n\n", mov->run_time);
}