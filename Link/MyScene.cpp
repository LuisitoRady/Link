#include "../freeglut/include/GL/glut.h" // include freeglut libraries
#include <stdio.h>
#include <iostream>

#define checkImageWidth 64
#define checkImageHeight 64

static GLubyte checkImage[checkImageHeight][checkImageWidth][4];

double rotate_y = 0;
double rotate_x = 0;

double scale = 0.06;
double translate_x = -7;
double translate_y = -14;
double translate_z = 0;

//Display function
void display() {

	//  Clear screen and Z-buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	// Reset transformations
	glLoadIdentity();

	// Rotate when user changes rotate_x and rotate_y
	glRotatef(rotate_x, 0.0, 1.0, 0.0);
	glRotatef(rotate_y, 1.0, 0.0, 0.0);

    // Scale when user changes scaling
	glScalef(scale, scale, scale);
    
    // Translate when user changes translate_x or translate_y or translate_z
	glTranslatef(translate_x, translate_y, translate_z);

    /*
     Start texturing tunica with a darker green color than the other elements remarking the
     difference between parts, with texture and without texture
    */
    
    glEnable(GL_TEXTURE_2D);
    //Tunica
    glBegin(GL_QUADS);
        glColor3f(0.02f, 0.2f, 0.02f); // Verde
        glTexCoord2f(0,0); glVertex3f(2, 2, 0);
        glTexCoord2f(0,1); glVertex3f(12, 2, 0);
        glTexCoord2f(1,1); glVertex3f(12, 3, 0);
        glTexCoord2f(1,0); glVertex3f(2, 3, 0);
    
        glTexCoord2f(0,0); glVertex3f(2, 3, 0);
        glTexCoord2f(0,1); glVertex3f(5, 3, 0);
        glTexCoord2f(1,1); glVertex3f(5, 4, 0);
        glTexCoord2f(1,0); glVertex3f(2, 4, 0);
    
        glTexCoord2f(0,0); glVertex3f(9, 3, 0);
        glTexCoord2f(0,1); glVertex3f(12, 3, 0);
        glTexCoord2f(1,1); glVertex3f(12, 4, 0);
        glTexCoord2f(1,0); glVertex3f(9, 4, 0);
    
        glTexCoord2f(0,0); glVertex3f(6, 4, 0);
        glTexCoord2f(0,1); glVertex3f(8, 4, 0);
        glTexCoord2f(1,1); glVertex3f(8, 5, 0);
        glTexCoord2f(1,0); glVertex3f(6, 5, 0);
    
        glTexCoord2f(0,0); glVertex3f(2, 5, 0);
        glTexCoord2f(0,1); glVertex3f(5, 5, 0);
        glTexCoord2f(1,1); glVertex3f(5, 6, 0);
        glTexCoord2f(1,0); glVertex3f(2, 6, 0);
    
        glTexCoord2f(0,0); glVertex3f(9, 5, 0);
        glTexCoord2f(0,1); glVertex3f(12, 5, 0);
        glTexCoord2f(1,1); glVertex3f(12, 6, 0);
        glTexCoord2f(1,0); glVertex3f(9, 6, 0);
    
        glTexCoord2f(0,0); glVertex3f(3, 6, 0);
        glTexCoord2f(0,1); glVertex3f(11, 6, 0);
        glTexCoord2f(1,1); glVertex3f(11, 8, 0);
        glTexCoord2f(1,0); glVertex3f(3, 8, 0);
    
        glTexCoord2f(0,0); glVertex3f(3, 6, 0);
        glTexCoord2f(0,1); glVertex3f(11, 6, 0);
        glTexCoord2f(1,1); glVertex3f(11, 8, 0);
        glTexCoord2f(1,0); glVertex3f(3, 8, 0);
    
        glTexCoord2f(0,0); glVertex3f(4, 8, 0);
        glTexCoord2f(0,1); glVertex3f(5, 8, 0);
        glTexCoord2f(1,1); glVertex3f(5, 9, 0);
        glTexCoord2f(1,0); glVertex3f(4, 9, 0);
    
        glTexCoord2f(0,0); glVertex3f(9, 8, 0);
        glTexCoord2f(0,1); glVertex3f(10, 8, 0);
        glTexCoord2f(1,1); glVertex3f(10, 9, 0);
        glTexCoord2f(1,0); glVertex3f(9, 9, 0);
    
        glTexCoord2f(0,0); glVertex3f(2, 2, 1);
        glTexCoord2f(0,1); glVertex3f(12, 2, 1);
        glTexCoord2f(1,1); glVertex3f(12, 3, 1);
        glTexCoord2f(1,0); glVertex3f(2, 3, 1);
    
        glTexCoord2f(0,0); glVertex3f(2, 3, 1);
        glTexCoord2f(0,1); glVertex3f(5, 3, 1);
        glTexCoord2f(1,1); glVertex3f(5, 4, 1);
        glTexCoord2f(1,0); glVertex3f(2, 4, 1);
    
        glTexCoord2f(0,0); glVertex3f(9, 3, 1);
        glTexCoord2f(0,1); glVertex3f(12, 3, 1);
        glTexCoord2f(1,1); glVertex3f(12, 4, 1);
        glTexCoord2f(1,0); glVertex3f(9, 4, 1);
    
        glTexCoord2f(0,0); glVertex3f(6, 4, 1);
        glTexCoord2f(0,1); glVertex3f(8, 4, 1);
        glTexCoord2f(1,1); glVertex3f(8, 5, 1);
        glTexCoord2f(1,0); glVertex3f(6, 5, 1);
    
        glTexCoord2f(0,0); glVertex3f(2, 5, 1);
        glTexCoord2f(0,1); glVertex3f(5, 5, 1);
        glTexCoord2f(1,1); glVertex3f(5, 6, 1);
        glTexCoord2f(1,0); glVertex3f(2, 6, 1);
    
        glTexCoord2f(0,0); glVertex3f(9, 5, 1);
        glTexCoord2f(0,1); glVertex3f(12, 5, 1);
        glTexCoord2f(1,1); glVertex3f(12, 6, 1);
        glTexCoord2f(1,0); glVertex3f(9, 6, 1);
    
        glTexCoord2f(0,0); glVertex3f(3, 6, 1);
        glTexCoord2f(0,1); glVertex3f(11, 6, 1);
        glTexCoord2f(1,1); glVertex3f(11, 8, 1);
        glTexCoord2f(1,0); glVertex3f(3, 8, 1);
    
        glTexCoord2f(0,0); glVertex3f(3, 6, 1);
        glTexCoord2f(0,1); glVertex3f(11, 6, 1);
        glTexCoord2f(1,1); glVertex3f(11, 8, 1);
        glTexCoord2f(1,0); glVertex3f(3, 8, 1);
    
        glTexCoord2f(0,0); glVertex3f(4, 8, 1);
        glTexCoord2f(0,1); glVertex3f(5, 8, 1);
        glTexCoord2f(1,1); glVertex3f(5, 9, 1);
        glTexCoord2f(1,0); glVertex3f(4, 9, 1);
    
        glTexCoord2f(0,0); glVertex3f(9, 8, 1);
        glTexCoord2f(0,1); glVertex3f(10, 8, 1);
        glTexCoord2f(1,1); glVertex3f(10, 9, 1);
        glTexCoord2f(1,0); glVertex3f(9, 9, 1);
    
        //Vertical
    
        glTexCoord2f(0,0); glVertex3f(2, 2, 0);
        glTexCoord2f(0,1); glVertex3f(2, 4, 0);
        glTexCoord2f(1,1); glVertex3f(2, 4, 1);
        glTexCoord2f(1,0); glVertex3f(2, 2, 1);
    
        glTexCoord2f(0,0); glVertex3f(2, 5, 0);
        glTexCoord2f(0,1); glVertex3f(2, 6, 0);
        glTexCoord2f(1,1); glVertex3f(2, 6, 1);
        glTexCoord2f(1,0); glVertex3f(2, 5, 1);
    
        glTexCoord2f(0,0); glVertex3f(12, 2, 0);
        glTexCoord2f(0,1); glVertex3f(12, 4, 0);
        glTexCoord2f(1,1); glVertex3f(12, 4, 1);
        glTexCoord2f(1,0); glVertex3f(12, 2, 1);
    
        glTexCoord2f(0,0); glVertex3f(12, 5, 0);
        glTexCoord2f(0,1); glVertex3f(12, 6, 0);
        glTexCoord2f(1,1); glVertex3f(12, 6, 1);
        glTexCoord2f(1,0); glVertex3f(12, 5, 1);
    
        glTexCoord2f(0,0); glVertex3f(3, 13, 0);
        glTexCoord2f(0,1); glVertex3f(3, 14, 0);
        glTexCoord2f(1,1); glVertex3f(3, 14, 1);
        glTexCoord2f(1,0); glVertex3f(3, 13, 1);
    
        glTexCoord2f(0,0); glVertex3f(4, 14, 0);
        glTexCoord2f(0,1); glVertex3f(4, 15, 0);
        glTexCoord2f(1,1); glVertex3f(4, 15, 1);
        glTexCoord2f(1,0); glVertex3f(4, 14, 1);
    
        glTexCoord2f(0,0); glVertex3f(5, 15, 0);
        glTexCoord2f(0,1); glVertex3f(5, 16, 0);
        glTexCoord2f(1,1); glVertex3f(5, 16, 1);
        glTexCoord2f(1,0); glVertex3f(5, 15, 1);
    
        glTexCoord2f(0,0); glVertex3f(11, 13, 0);
        glTexCoord2f(0,1); glVertex3f(11, 14, 0);
        glTexCoord2f(1,1); glVertex3f(11, 14, 1);
        glTexCoord2f(1,0); glVertex3f(11, 13, 1);
    
        glTexCoord2f(0,0); glVertex3f(10, 14, 0);
        glTexCoord2f(0,1); glVertex3f(10, 15, 0);
        glTexCoord2f(1,1); glVertex3f(10, 15, 1);
        glTexCoord2f(1,0); glVertex3f(10, 14, 1);
    
        glTexCoord2f(0,0); glVertex3f(9, 15, 0);
        glTexCoord2f(0,1); glVertex3f(9, 16, 0);
        glTexCoord2f(1,1); glVertex3f(9, 16, 1);
        glTexCoord2f(1,0); glVertex3f(9, 15, 1);
    
        //Horizontal
    
        glTexCoord2f(0,0);glVertex3f(2, 2, 0);
        glTexCoord2f(0,1);glVertex3f(3, 2, 0);
        glTexCoord2f(1,1);glVertex3f(3, 2, 1);
        glTexCoord2f(1,0);glVertex3f(2, 2, 1);
    
        glTexCoord2f(0,0);glVertex3f(11, 2, 0);
        glTexCoord2f(0,1);glVertex3f(12, 2, 0);
        glTexCoord2f(1,1);glVertex3f(12, 2, 1);
        glTexCoord2f(1,0);glVertex3f(11, 2, 1);
    
        glTexCoord2f(0,0);glVertex3f(5, 16, 0);
        glTexCoord2f(0,1);glVertex3f(9, 16, 0);
        glTexCoord2f(1,1);glVertex3f(9, 16, 1);
        glTexCoord2f(1,0);glVertex3f(5, 16, 1);
    
        glTexCoord2f(0,0);glVertex3f(4, 15, 0);
        glTexCoord2f(0,1);glVertex3f(5, 15, 0);
        glTexCoord2f(1,1);glVertex3f(5, 15, 1);
        glTexCoord2f(1,0);glVertex3f(4, 15, 1);
    
        glTexCoord2f(0,0);glVertex3f(3, 14, 0);
        glTexCoord2f(0,1);glVertex3f(4, 14, 0);
        glTexCoord2f(1,1);glVertex3f(4, 14, 1);
        glTexCoord2f(1,0);glVertex3f(3, 14, 1);
    
        glTexCoord2f(0,0);glVertex3f(9, 15, 0);
        glTexCoord2f(0,1);glVertex3f(10, 15, 0);
        glTexCoord2f(1,1);glVertex3f(10, 15, 1);
        glTexCoord2f(1,0);glVertex3f(9, 15, 1);
    
        glTexCoord2f(0,0);glVertex3f(10, 14, 0);
        glTexCoord2f(0,1);glVertex3f(11, 14, 0);
        glTexCoord2f(1,1);glVertex3f(11, 14, 1);
        glTexCoord2f(1,0);glVertex3f(10, 14, 1);
    
        glTexCoord2f(0,0);glVertex3f(2, 2, 0);
        glTexCoord2f(0,1);glVertex3f(12, 2, 0);
        glTexCoord2f(1,1);glVertex3f(12, 2, 1);
        glTexCoord2f(1,0);glVertex3f(2, 2, 1);
    
    glEnd();
    glDisable(GL_TEXTURE_2D);
    
    
	// Comienza display de todo lo demás de Link
	glBegin(GL_QUADS);
        glColor3f(0.90f, 0.47f, 0.02f); // cafe

        //Todo lo cafe
        //Botas
        glVertex3f(3, 0, 0);
        glVertex3f(6, 0, 0);
        glVertex3f(6, 2, 0);
        glVertex3f(3, 2, 0);

        glVertex3f(8, 0, 0);
        glVertex3f(11, 0, 0);
        glVertex3f(11, 2, 0);
        glVertex3f(8, 2, 0);
    
        //Cinturon
        glVertex3f(2, 4, 0);
        glVertex3f(6, 4, 0);
        glVertex3f(6, 5, 0);
        glVertex3f(2, 5, 0);

        glVertex3f(8, 4, 0);
        glVertex3f(12, 4, 0);
        glVertex3f(12, 5, 0);
        glVertex3f(8, 5, 0);

        glVertex3f(5, 3, 0);
        glVertex3f(9, 3, 0);
        glVertex3f(9, 4, 0);
        glVertex3f(5, 4, 0);

        glVertex3f(5, 5, 0);
        glVertex3f(9, 5, 0);
        glVertex3f(9, 6, 0);
        glVertex3f(5, 6, 0);

        //Brazo izq
        glVertex3f(0, 11, 0);
        glVertex3f(1, 11, 0);
        glVertex3f(1, 14, 0);
        glVertex3f(0, 14, 0);

        glVertex3f(1, 8, 0);
        glVertex3f(2, 8, 0);
        glVertex3f(2, 14, 0);
        glVertex3f(1, 14, 0);

        glVertex3f(2, 6, 0);
        glVertex3f(3, 6, 0);
        glVertex3f(3, 11, 0);
        glVertex3f(2, 11, 0);

        glVertex3f(3, 8, 0);
        glVertex3f(4, 8, 0);
        glVertex3f(4, 10, 0);
        glVertex3f(3, 10, 0);

        //Brazo Derecho

        glVertex3f(13, 11, 0);
        glVertex3f(14, 11, 0);
        glVertex3f(14, 14, 0);
        glVertex3f(13, 14, 0);

        glVertex3f(12, 8, 0);
        glVertex3f(13, 8, 0);
        glVertex3f(13, 14, 0);
        glVertex3f(12, 14, 0);

        glVertex3f(11, 6, 0);
        glVertex3f(12, 6, 0);
        glVertex3f(12, 11, 0);
        glVertex3f(11, 11, 0);

        glVertex3f(10, 8, 0);
        glVertex3f(11, 8, 0);
        glVertex3f(11, 10, 0);
        glVertex3f(10, 10, 0);

        //Cabello
        glVertex3f(3, 12, 0);
        glVertex3f(4, 12, 0);
        glVertex3f(4, 13, 0);
        glVertex3f(3, 13, 0);

        glVertex3f(10, 12, 0);
        glVertex3f(11, 12, 0);
        glVertex3f(11, 13, 0);
        glVertex3f(10, 13, 0);

        glVertex3f(4, 13, 0);
        glVertex3f(10, 13, 0);
        glVertex3f(10, 14, 0);
        glVertex3f(4, 14, 0);

        glVertex3f(5, 14, 0);
        glVertex3f(9, 14, 0);
        glVertex3f(9, 15, 0);
        glVertex3f(5, 15, 0);
    
        //Ojos

        glVertex3f(5, 11, 0);
        glVertex3f(6, 11, 0);
        glVertex3f(6, 12, 0);
        glVertex3f(5, 12, 0);

        glVertex3f(8, 11, 0);
        glVertex3f(9, 11, 0);
        glVertex3f(9, 12, 0);
        glVertex3f(8, 12, 0);

        //Todo lo verde
        //Sombrero

        glColor3f(0.02f, 0.5f, 0.02f); // Verde
    
        glVertex3f(5, 15, 0);
        glVertex3f(9, 15, 0);
        glVertex3f(9, 16, 0);
        glVertex3f(5, 16, 0);

        glVertex3f(4, 14, 0);
        glVertex3f(5, 14, 0);
        glVertex3f(5, 15, 0);
        glVertex3f(4, 15, 0);

        glVertex3f(9, 14, 0);
        glVertex3f(10, 14, 0);
        glVertex3f(10, 15, 0);
        glVertex3f(9, 15, 0);

        glVertex3f(3, 13, 0);
        glVertex3f(4, 13, 0);
        glVertex3f(4, 14, 0);
        glVertex3f(3, 14, 0);

        glVertex3f(10, 13, 0);
        glVertex3f(11, 13, 0);
        glVertex3f(11, 14, 0);
        glVertex3f(10, 14, 0);

        //Ojos

        glVertex3f(5, 12, 0);
        glVertex3f(6, 12, 0);
        glVertex3f(6, 13, 0);
        glVertex3f(5, 13, 0);

        glVertex3f(8, 12, 0);
        glVertex3f(9, 12, 0);
        glVertex3f(9, 13, 0);
        glVertex3f(8, 13, 0);

        //Todo la Piel
        glColor3f(1.0f, 0.95f, 0.5f); // piel

        //Manita izquierda

        glVertex3f(0, 14, 0);
        glVertex3f(2, 14, 0);
        glVertex3f(2, 16, 0);
        glVertex3f(0, 16, 0);

        glVertex3f(2, 14, 0);
        glVertex3f(3, 14, 0);
        glVertex3f(3, 15, 0);
        glVertex3f(2, 15, 0);

        //Manita derecha

        glVertex3f(12, 14, 0);
        glVertex3f(14, 14, 0);
        glVertex3f(14, 16, 0);
        glVertex3f(12, 16, 0);

        glVertex3f(11, 14, 0);
        glVertex3f(12, 14, 0);
        glVertex3f(12, 15, 0);
        glVertex3f(11, 15, 0);

        //CARITA

        glVertex3f(2, 11, 0);
        glVertex3f(3, 11, 0);
        glVertex3f(3, 13, 0);
        glVertex3f(2, 13, 0);

        glVertex3f(3, 10, 0);
        glVertex3f(4, 10, 0);
        glVertex3f(4, 12, 0);
        glVertex3f(3, 12, 0);

        glVertex3f(4, 9, 0);
        glVertex3f(5, 9, 0);
        glVertex3f(5, 13, 0);
        glVertex3f(4, 13, 0);

        glVertex3f(5, 8, 0);
        glVertex3f(6, 8, 0);
        glVertex3f(6, 11, 0);
        glVertex3f(5, 11, 0);

        glVertex3f(6, 10, 0);
        glVertex3f(7, 10, 0);
        glVertex3f(7, 13, 0);
        glVertex3f(6, 13, 0);

        glVertex3f(11, 11, 0);
        glVertex3f(12, 11, 0);
        glVertex3f(12, 13, 0);
        glVertex3f(11, 13, 0);

        glVertex3f(10, 10, 0);
        glVertex3f(11, 10, 0);
        glVertex3f(11, 12, 0);
        glVertex3f(10, 12, 0);

        glVertex3f(9, 9, 0);
        glVertex3f(10, 9, 0);
        glVertex3f(10, 13, 0);
        glVertex3f(9, 13, 0);

        glVertex3f(8, 8, 0);
        glVertex3f(9, 8, 0);
        glVertex3f(9, 11, 0);
        glVertex3f(8, 11, 0);

        glVertex3f(7, 10, 0);
        glVertex3f(8, 10, 0);
        glVertex3f(8, 13, 0);
        glVertex3f(7, 13, 0);

        //Boca
        glColor3f(0.9f, 0.5f, 0.65f); // Boca

        glVertex3f(6, 8, 0);
        glVertex3f(8, 8, 0);
        glVertex3f(8, 10, 0);
        glVertex3f(6, 10, 0);

        //Todo lo Rojo
        glColor3f(1.f, 0.f, 0.f); // Boca

        //Corazon

        glVertex3f(3, 21, 0);
        glVertex3f(11, 21, 0);
        glVertex3f(11, 27, 0);
        glVertex3f(3, 27, 0);

        glVertex3f(4, 27, 0);
        glVertex3f(6, 27, 0);
        glVertex3f(6, 29, 0);
        glVertex3f(4, 29, 0);

        glVertex3f(8, 27, 0);
        glVertex3f(10, 27, 0);
        glVertex3f(10, 29, 0);
        glVertex3f(8, 29, 0);

        glVertex3f(4, 20, 0);
        glVertex3f(10, 20, 0);
        glVertex3f(10, 21, 0);
        glVertex3f(4, 21, 0);

        glVertex3f(5, 19, 0);
        glVertex3f(9, 19, 0);
        glVertex3f(9, 20, 0);
        glVertex3f(5, 20, 0);

        glVertex3f(6, 18, 0);
        glVertex3f(8, 18, 0);
        glVertex3f(8, 19, 0);
        glVertex3f(6, 19, 0);
    

        glColor3f(0.90f, 0.47f, 0.02f); // cafe

        //Todo lo cafe
        //Botas
        glVertex3f(3, 0, 1);
        glVertex3f(6, 0, 1);
        glVertex3f(6, 2, 1);
        glVertex3f(3, 2, 1);

        glVertex3f(8, 0, 1);
        glVertex3f(11, 0, 1);
        glVertex3f(11, 2, 1);
        glVertex3f(8, 2, 1);

        //Cinturon
        glVertex3f(2, 4, 1);
        glVertex3f(6, 4, 1);
        glVertex3f(6, 5, 1);
        glVertex3f(2, 5, 1);

        glVertex3f(8, 4, 1);
        glVertex3f(12, 4, 1);
        glVertex3f(12, 5, 1);
        glVertex3f(8, 5, 1);


        //Brazo izq
        glVertex3f(0, 11, 1);
        glVertex3f(1, 11, 1);
        glVertex3f(1, 14, 1);
        glVertex3f(0, 14, 1);

        glVertex3f(1, 8, 1);
        glVertex3f(2, 8, 1);
        glVertex3f(2, 14, 1);
        glVertex3f(1, 14, 1);

        glVertex3f(2, 6, 1);
        glVertex3f(3, 6, 1);
        glVertex3f(3, 11, 1);
        glVertex3f(2, 11, 1);

        glVertex3f(3, 8, 1);
        glVertex3f(4, 8, 1);
        glVertex3f(4, 10, 1);
        glVertex3f(3, 10, 1);

        //Brazo Derecho

        glVertex3f(13, 11, 1);
        glVertex3f(14, 11, 1);
        glVertex3f(14, 14, 1);
        glVertex3f(13, 14, 1);

        glVertex3f(12, 8, 1);
        glVertex3f(13, 8, 1);
        glVertex3f(13, 14, 1);
        glVertex3f(12, 14, 1);

        glVertex3f(11, 6, 1);
        glVertex3f(12, 6, 1);
        glVertex3f(12, 11, 1);
        glVertex3f(11, 11, 1);

        glVertex3f(10, 8, 1);
        glVertex3f(11, 8, 1);
        glVertex3f(11, 10, 1);
        glVertex3f(10, 10, 1);

        glVertex3f(6, 4, 1);
        glVertex3f(8, 4, 1);
        glVertex3f(8, 5, 1);
        glVertex3f(6, 5, 1);


        //Todo lo verde
        glColor3f(0.02f, 0.5f, 0.02f); // Verde

        //Sombrero

        glVertex3f(5, 15, 1);
        glVertex3f(9, 15, 1);
        glVertex3f(9, 16, 1);
        glVertex3f(5, 16, 1);

        glVertex3f(4, 14, 1);
        glVertex3f(5, 14, 1);
        glVertex3f(5, 15, 1);
        glVertex3f(4, 15, 1);

        glVertex3f(9, 14, 1);
        glVertex3f(10, 14, 1);
        glVertex3f(10, 15, 1);
        glVertex3f(9, 15, 1);

        glVertex3f(3, 13, 1);
        glVertex3f(4, 13, 1);
        glVertex3f(4, 14, 1);
        glVertex3f(3, 14, 1);

        glVertex3f(10, 13, 1);
        glVertex3f(11, 13, 1);
        glVertex3f(11, 14, 1);
        glVertex3f(10, 14, 1);

        glVertex3f(3, 12, 1);
        glVertex3f(4, 12, 1);
        glVertex3f(4, 13, 1);
        glVertex3f(3, 13, 1);

        glVertex3f(10, 12, 1);
        glVertex3f(11, 12, 1);
        glVertex3f(11, 13, 1);
        glVertex3f(10, 13, 1);

        glVertex3f(4, 13, 1);
        glVertex3f(10, 13, 1);
        glVertex3f(10, 14, 1);
        glVertex3f(4, 14, 1);

        glVertex3f(5, 14, 1);
        glVertex3f(9, 14, 1);
        glVertex3f(9, 15, 1);
        glVertex3f(5, 15, 1);

        glVertex3f(4, 11, 1);
        glVertex3f(10, 11, 1);
        glVertex3f(10, 13, 1);
        glVertex3f(4, 13, 1);

        glVertex3f(5, 10, 1);
        glVertex3f(9, 10, 1);
        glVertex3f(9, 11, 1);
        glVertex3f(5, 11, 1);

        glVertex3f(6, 9, 1);
        glVertex3f(8, 9, 1);
        glVertex3f(8, 10, 1);
        glVertex3f(6, 10, 1);

        //Todo la Piel
        glColor3f(1.f, 0.95f, 0.5f); // piel

        //Manita izquierda

        glVertex3f(0, 14, 1);
        glVertex3f(2, 14, 1);
        glVertex3f(2, 16, 1);
        glVertex3f(0, 16, 1);

        glVertex3f(2, 14, 1);
        glVertex3f(3, 14, 1);
        glVertex3f(3, 15, 1);
        glVertex3f(2, 15, 1);

        //Manita derecha

        glVertex3f(12, 14, 1);
        glVertex3f(14, 14, 1);
        glVertex3f(14, 16, 1);
        glVertex3f(12, 16, 1);

        glVertex3f(11, 14, 1);
        glVertex3f(12, 14, 1);
        glVertex3f(12, 15, 1);
        glVertex3f(11, 15, 1);

        //CARITA

        glVertex3f(2, 11, 1);
        glVertex3f(3, 11, 1);
        glVertex3f(3, 13, 1);
        glVertex3f(2, 13, 1);

        glVertex3f(3, 10, 1);
        glVertex3f(4, 10, 1);
        glVertex3f(4, 12, 1);
        glVertex3f(3, 12, 1);

        glVertex3f(4, 9, 1);
        glVertex3f(5, 9, 1);
        glVertex3f(5, 11, 1);
        glVertex3f(4, 11, 1);

        glVertex3f(5, 9, 1);
        glVertex3f(6, 9, 1);
        glVertex3f(6, 10, 1);
        glVertex3f(5, 10, 1);

        glVertex3f(5, 8, 1);
        glVertex3f(9, 8, 1);
        glVertex3f(9, 9, 1);
        glVertex3f(5, 9, 1);

        glVertex3f(11, 11, 1);
        glVertex3f(12, 11, 1);
        glVertex3f(12, 13, 1);
        glVertex3f(11, 13, 1);

        glVertex3f(10, 10, 1);
        glVertex3f(11, 10, 1);
        glVertex3f(11, 12, 1);
        glVertex3f(10, 12, 1);

        glVertex3f(9, 9, 1);
        glVertex3f(10, 9, 1);
        glVertex3f(10, 11, 1);
        glVertex3f(9, 11, 1);

        glVertex3f(8, 9, 1);
        glVertex3f(9, 9, 1);
        glVertex3f(9, 10, 1);
        glVertex3f(8, 10, 1);

        //Todo lo Rojo
        glColor3f(1.f, 0.f, 0.f); // Rojo Corazon

        //Corazon

        glVertex3f(3, 21, 1);
        glVertex3f(11, 21, 1);
        glVertex3f(11, 27, 1);
        glVertex3f(3, 27, 1);

        glVertex3f(4, 27, 1);
        glVertex3f(6, 27, 1);
        glVertex3f(6, 29, 1);
        glVertex3f(4, 29, 1);

        glVertex3f(8, 27, 1);
        glVertex3f(10, 27, 1);
        glVertex3f(10, 29, 1);
        glVertex3f(8, 29, 1);

        glVertex3f(4, 20, 1);
        glVertex3f(10, 20, 1);
        glVertex3f(10, 21, 1);
        glVertex3f(4, 21, 1);

        glVertex3f(5, 19, 1);
        glVertex3f(9, 19, 1);
        glVertex3f(9, 20, 1);
        glVertex3f(5, 20, 1);

        glVertex3f(6, 18, 1);
        glVertex3f(8, 18, 1);
        glVertex3f(8, 19, 1);
        glVertex3f(6, 19, 1);

        //Todo lo Rojo
        glColor3f(1.f, 0.f, 0.f); // rojo

        //Vertical
        glVertex3f(3, 21, 0);
        glVertex3f(3, 27, 0);
        glVertex3f(3, 27, 1);
        glVertex3f(3, 21, 1);

        glVertex3f(4, 20, 0);
        glVertex3f(4, 29, 0);
        glVertex3f(4, 29, 1);
        glVertex3f(4, 20, 1);

        glVertex3f(5, 19, 0);
        glVertex3f(5, 29, 0);
        glVertex3f(5, 29, 1);
        glVertex3f(5, 19, 1);

        glVertex3f(6, 18, 0);
        glVertex3f(6, 27, 0);
        glVertex3f(6, 27, 1);
        glVertex3f(6, 18, 1);

        glVertex3f(8, 18, 0);
        glVertex3f(8, 27, 0);
        glVertex3f(8, 27, 1);
        glVertex3f(8, 18, 1);

        glVertex3f(9, 19, 0);
        glVertex3f(9, 29, 0);
        glVertex3f(9, 29, 1);
        glVertex3f(9, 19, 1);

        glVertex3f(10, 20, 0);
        glVertex3f(10, 29, 0);
        glVertex3f(10, 29, 1);
        glVertex3f(10, 20, 1);
    
        glVertex3f(11, 21, 0);
        glVertex3f(11, 27, 0);
        glVertex3f(11, 27, 1);
        glVertex3f(11, 21, 1);

        //Horizontal

        glVertex3f(6, 18, 0);
        glVertex3f(8, 18, 0);
        glVertex3f(8, 18, 1);
        glVertex3f(6, 18, 1);

        glVertex3f(5, 19, 0);
        glVertex3f(9, 19, 0);
        glVertex3f(9, 19, 1);
        glVertex3f(5, 19, 1);

        glVertex3f(4, 20, 0);
        glVertex3f(10, 20, 0);
        glVertex3f(10, 20, 1);
        glVertex3f(4, 20, 1);

        glVertex3f(3, 21, 0);
        glVertex3f(11, 21, 0);
        glVertex3f(11, 21, 1);
        glVertex3f(3, 21, 1);

        glVertex3f(3, 27, 0);
        glVertex3f(11, 27, 0);
        glVertex3f(11, 27, 1);
        glVertex3f(3, 27, 1);

        glVertex3f(4, 29, 0);
        glVertex3f(6, 29, 0);
        glVertex3f(6, 29, 1);
        glVertex3f(4, 29, 1);

        glVertex3f(8, 29, 0);
        glVertex3f(10, 29, 0);
        glVertex3f(10, 29, 1);
        glVertex3f(8, 29, 1);

        //Todo la Piel
        glColor3f(1.f, 0.95f, 0.5f); // piel

        //Vertical

        glVertex3f(0, 14, 0);
        glVertex3f(0, 16, 0);
        glVertex3f(0, 16, 1);
        glVertex3f(0, 14, 1);

        glVertex3f(2, 15, 0);
        glVertex3f(2, 16, 0);
        glVertex3f(2, 16, 1);
        glVertex3f(2, 15, 1);

        glVertex3f(3, 14, 0);
        glVertex3f(3, 15, 0);
        glVertex3f(3, 15, 1);
        glVertex3f(3, 14, 1);

        glVertex3f(14, 14, 0);
        glVertex3f(14, 16, 0);
        glVertex3f(14, 16, 1);
        glVertex3f(14, 14, 1);

        glVertex3f(12, 15, 0);
        glVertex3f(12, 16, 0);
        glVertex3f(12, 16, 1);
        glVertex3f(12, 15, 1);

        glVertex3f(11, 14, 0);
        glVertex3f(11, 15, 0);
        glVertex3f(11, 15, 1);
        glVertex3f(11, 14, 1);

        //Horizontal
        glVertex3f(0, 16, 0);
        glVertex3f(2, 16, 0);
        glVertex3f(2, 16, 1);
        glVertex3f(0, 16, 1);

        glVertex3f(2, 15, 0);
        glVertex3f(3, 15, 0);
        glVertex3f(3, 15, 1);
        glVertex3f(2, 15, 1);

        glVertex3f(2, 14, 0);
        glVertex3f(3, 14, 0);
        glVertex3f(3, 14, 1);
        glVertex3f(2, 14, 1);

        glVertex3f(2, 13, 0);
        glVertex3f(3, 13, 0);
        glVertex3f(3, 13, 1);
        glVertex3f(2, 13, 1);

        glVertex3f(12, 16, 0);
        glVertex3f(14, 16, 0);
        glVertex3f(14, 16, 1);
        glVertex3f(12, 16, 1);

        glVertex3f(11, 15, 0);
        glVertex3f(12, 15, 0);
        glVertex3f(12, 15, 1);
        glVertex3f(11, 15, 1);

        glVertex3f(11, 14, 0);
        glVertex3f(12, 14, 0);
        glVertex3f(12, 14, 1);
        glVertex3f(11, 14, 1);

        glVertex3f(11, 13, 0);
        glVertex3f(12, 13, 0);
        glVertex3f(12, 13, 1);
        glVertex3f(11, 13, 1);

        //Todo lo cafe
        glColor3f(0.90f, 0.47f, 0.02f); // cafe

        //Vertical

        glVertex3f(0, 11, 0);
        glVertex3f(0, 14, 0);
        glVertex3f(0, 14, 1);
        glVertex3f(0, 11, 1);

        glVertex3f(1, 8, 0);
        glVertex3f(1, 11, 0);
        glVertex3f(1, 11, 1);
        glVertex3f(1, 8, 1);

        glVertex3f(2, 6, 0);
        glVertex3f(2, 8, 0);
        glVertex3f(2, 8, 1);
        glVertex3f(2, 6, 1);

        glVertex3f(2, 4, 0);
        glVertex3f(2, 5, 0);
        glVertex3f(2, 5, 1);
        glVertex3f(2, 4, 1);

        glVertex3f(3, 0, 0);
        glVertex3f(3, 2, 0);
        glVertex3f(3, 2, 1);
        glVertex3f(3, 0, 1);

        glVertex3f(6, 0, 0);
        glVertex3f(6, 2, 0);
        glVertex3f(6, 2, 1);
        glVertex3f(6, 0, 1);

        //Otro Lado

        glVertex3f(14, 11, 0);
        glVertex3f(14, 14, 0);
        glVertex3f(14, 14, 1);
        glVertex3f(14, 11, 1);

        glVertex3f(13, 8, 0);
        glVertex3f(13, 11, 0);
        glVertex3f(13, 11, 1);
        glVertex3f(13, 8, 1);

        glVertex3f(12, 6, 0);
        glVertex3f(12, 8, 0);
        glVertex3f(12, 8, 1);
        glVertex3f(12, 6, 1);

        glVertex3f(12, 4, 0);
        glVertex3f(12, 5, 0);
        glVertex3f(12, 5, 1);
        glVertex3f(12, 4, 1);

        glVertex3f(11, 0, 0);
        glVertex3f(11, 2, 0);
        glVertex3f(11, 2, 1);
        glVertex3f(11, 0, 1);

        glVertex3f(8, 0, 0);
        glVertex3f(8, 2, 0);
        glVertex3f(8, 2, 1);
        glVertex3f(8, 0, 1);

        glVertex3f(2, 13, 0);
        glVertex3f(2, 14, 0);
        glVertex3f(2, 14, 1);
        glVertex3f(2, 13, 1);

        glVertex3f(12, 13, 0);
        glVertex3f(12, 14, 0);
        glVertex3f(12, 14, 1);
        glVertex3f(12, 13, 1);

        //Horizontal

        glVertex3f(3, 0, 0);
        glVertex3f(6, 0, 0);
        glVertex3f(6, 0, 1);
        glVertex3f(3, 0, 1);

        glVertex3f(8, 0, 0);
        glVertex3f(11, 0, 0);
        glVertex3f(11, 0, 1);
        glVertex3f(8, 0, 1);

        glVertex3f(1, 8, 0);
        glVertex3f(2, 8, 0);
        glVertex3f(2, 8, 1);
        glVertex3f(1, 8, 1);

        glVertex3f(12, 8, 0);
        glVertex3f(13, 8, 0);
        glVertex3f(13, 8, 1);
        glVertex3f(12, 8, 1);

        glVertex3f(0, 11, 0);
        glVertex3f(1, 11, 0);
        glVertex3f(1, 11, 1);
        glVertex3f(0, 11, 1);

        glVertex3f(12, 11, 0);
        glVertex3f(14, 11, 0);
        glVertex3f(14, 11, 1);
        glVertex3f(13, 11, 1);
	glEnd();

	glFlush();
	glutSwapBuffers();
}

// specialKeys() callback Function
void specialKeys(int key, int x, int y) {

	// 	Right arrow - decrease rotation by 10 degree in x-axis
	if (key == GLUT_KEY_RIGHT)
		rotate_x -= 10;

	//  Left arrow - increase rotation by 10 degree in x-axis
	else if (key == GLUT_KEY_LEFT)
		rotate_x += 10;

	//  Up arrow - increase rotation by 10 degree in y-axis
	else if (key == GLUT_KEY_UP)
		rotate_y += 10;
	
	//  Down arrow - decrease rotation by 10 degree in y-axis
	else if (key == GLUT_KEY_DOWN)
		rotate_y -= 10;

	//	Letter H or h (Huge) - increase scaling by a constant of 0.01 
	else if (key == 66 || key == 98)
		scale += .01;

	//	Letter L or l (Little) - increase scaling by a constant of 0.01 
	else if (key == 76 || key == 108)
		scale -= .01;

	//	Horizontal tab key - translate to right in x-axis
	else if (key == 9)
		translate_x += 1;

	//	Backspace key - translate to left in x-axis
	else if (key == 127)
		translate_x -= 1;

	//	Letter W or w - translate up in y-axis
	else if (key == 87 || key == 119)
		translate_y += 1;

	//	Letter S or s - translate down in y-axis
	else if (key == 83 || key == 115)
		translate_y -= 1;

	//	Letter Z or z - translate close to z-axis
	else if (key == 90 || key == 122)
		translate_z += 1;

	//	Letter X or x - translate far to z-axis
	else if (key == 88 || key == 120)
		translate_z -= 1;

	//  Request display update
	glutPostRedisplay();

}

void makeCheckImage(void) {
    int i, j, c;
    
    // Generating pattern
    for(i = 0; i < checkImageHeight; i++) {
        for(j = 0; j < checkImageWidth; j++) {
            c = 255;
            checkImage[i][j][0] = (GLubyte) c;
            checkImage[i][j][1] = (GLubyte) c;
            checkImage[i][j][2] = (GLubyte) c;
            checkImage[i][j][3] = (GLubyte) 255;
        }
    }
}

void init(void) {
    glEnable(GL_DEPTH_TEST);
    
    makeCheckImage();
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,GL_NEAREST);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, checkImageWidth, checkImageHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, checkImage);
    //gluBuild2DMipmaps(GL_TEXTURE_2D,1,checkImageWidth,checkImageHeight,GL_RGBA,GL_UNSIGNED_BYTE,checkImage);
}

// main() function
int main(int argc, char* argv[]) {

	//  Initialize GLUT and process user parameters
	glutInit(&argc, argv);

	//Tamanio del cuadro
	glutInitWindowSize(1100, 700);

	//  Request double buffered true color window with Z-buffer
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	// Create window
	glutCreateWindow("LinkCorazon");
    
    // Init texture mapping
    init();

	//  Enable Z-buffer depth test
	glEnable(GL_DEPTH_TEST);

	// Callback functions
	glutDisplayFunc(display);
	glutSpecialFunc(specialKeys);

	//  Pass control to GLUT for events
	glutMainLoop();

	return 0;
}
