#ifndef INIT_H
#define INIT_H
#define TAILLEX 1366
#define TAILLEY 768

void Display_InitGL();
/* function to reset our viewport after a window resize */
int Display_SetViewport( int width, int height );
void Init_SDL();

#endif
