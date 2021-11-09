
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cinema.h"
struct movie {
    char title[MAX_STR_LENGTH];
    int length;
    double rating;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}

void add_genre(struct cinema *cinema, char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    new->movies = NULL;
    new->next = NULL;

    new->next = cinema->genres;
    cinema->genres = new;
}

int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_name,
    int length,
    double rating
) {
    // find genre we're looking for - if not, return NOT_FOUND
    struct genre *curr_genre = cinema->genres;
    while (strcmp(genre_name, curr_genre->name) != 0 && curr_genre != NULL) {
        
    
        curr_genre = curr_genre->next;
    }
    
    if (curr_genre == NULL ) {
    
        return NOT_FOUND;
    }
   
    // malloc a new movie
    struct movie *new_movie = malloc(sizeof(struct movie));
    new_movie->length = length;
    new_movie->rating = rating;
    strcpy(new_movie->title,title);
    new_movie->next = NULL;
    
  
    // loop to end of list of movies and add movie 
    
    
    struct movie *curr_movie = curr_genre->movies;
   // if empty
   
    if (curr_movie == NULL){
        curr_genre->movies = new;
        return SUCCESS;

    }
    
    while (curr_movie->next != NULL) {
        curr_movie = curr_movie->next;
    
    }
    curr_movie->next = new;
   
    return SUCCESS;
}

void print_genre(struct cinema *cinema, char *genre_name) {
    struct genre *curr_genre = cinema->genres;
    while (strcmp(genre_name, curr_genre->name) != 0 && curr_genre != NULL) {
        
    
        curr_genre = curr_genre->next;
    }
    
    if (curr_genre == NULL ) {
    
        return;
    }
    
    // 
    
    struct movie *curr_movie = curr_genre->movies;
   
    
    while (curr_movie != NULL) {
        // printf statement
        curr_movie = curr_movie->next;
    
    }
    
    
    
    
}
