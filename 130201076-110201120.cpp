#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <stdio.h>
#include <conio.h>
#include<time.h>
int ciz() { al_init_primitives_addon(); 
 al_draw_rectangle(10, 260, 80, 480, al_map_rgb(255, 0, 255), 7);
 al_draw_rectangle(95, 240, 165, 480, al_map_rgb(220, 160, 0), 5);
 al_draw_rectangle(186, 250, 285, 480, al_map_rgb(55, 0, 25), 4);
 al_draw_rectangle(300, 310, 370, 480, al_map_rgb(20, 70, 25), 6);
 al_draw_rectangle(392, 270, 470, 480, al_map_rgb(25, 170, 5), 7);
 al_draw_rectangle(502, 300, 568, 480, al_map_rgb(95, 60, 115), 8);
 al_draw_rectangle(582, 210, 635, 480, al_map_rgb(25, 70, 50), 9);
 return 0;
}
void bina1_1() {
	al_init_primitives_addon();
	al_draw_filled_rectangle(25, 260, 105, 480, al_map_rgb(90, 90, 20));
	al_draw_filled_triangle(19, 265, 65, 215, 110, 265, al_map_rgb(99, 33, 00)); 
	al_draw_filled_rectangle(45, 280, 65, 300, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(85, 280, 95, 300, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(45, 310, 65, 300, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(85, 310, 95, 300, al_map_rgb(255, 255, 255));

}
void bina1_2(){
	al_init_primitives_addon();
	al_draw_filled_rectangle(20, 300, 120, 480, al_map_rgb(99, 99, 66));
	al_draw_filled_triangle(15, 300, 70, 270, 125, 300, al_map_rgb(70, 33, 10));
	al_draw_filled_rectangle(40, 320, 60, 340, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(80, 320, 100, 340, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(40, 360, 60, 380, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(80, 360, 100, 380, al_map_rgb(255, 255, 255));
	
}
void bina2_1(){ al_init_primitives_addon(); 
al_draw_filled_rectangle(130, 330, 240, 480, al_map_rgb(99, 99, 66));
 al_draw_filled_triangle(125, 335, 180, 270, 250, 335, al_map_rgb(99, 33, 10));
 al_draw_filled_rectangle(150, 360, 170, 380, al_map_rgb(255, 255, 255));
 al_draw_filled_rectangle(190, 360, 210, 380, al_map_rgb(255, 255, 255));
 al_draw_filled_rectangle(150, 400, 170, 420, al_map_rgb(255, 255, 255));
 al_draw_filled_rectangle(190, 400, 210, 420, al_map_rgb(255, 255, 255));
}
void bina2_2(){
	al_init_primitives_addon();
	al_draw_filled_rectangle(123, 260, 220, 480, al_map_rgb(80, 99, 66));
	al_draw_filled_triangle(119, 260, 172, 220, 225, 260, al_map_rgb(70, 33, 10));
	al_draw_filled_rectangle(145, 320, 165, 340, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(190, 320, 210, 340, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(145, 360, 165, 380, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(190, 360, 210, 380, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(145, 280, 165, 300, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(190, 280, 210, 300, al_map_rgb(255, 255, 255));
}
void bina3_1(){ al_init_primitives_addon(); 
al_draw_filled_rectangle(260, 300, 365, 480, al_map_rgb(40, 99, 66));
al_draw_filled_triangle(255, 305, 308, 245, 370, 305, al_map_rgb(99, 33, 10));
al_draw_filled_rectangle(280, 320, 300, 340, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(320, 320, 340, 340, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(280, 360, 300, 380, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(320, 360, 340, 380, al_map_rgb(255, 255, 255));

}
void bina3_2(){ al_init_primitives_addon(); 
al_draw_filled_rectangle(270, 325, 390, 480, al_map_rgb(90, 90, 20));
al_draw_filled_triangle(265, 325, 330, 280, 395, 325, al_map_rgb(80, 33, 13));
al_draw_filled_rectangle(300, 370, 320, 390, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(340, 370, 360, 390, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(300, 330, 320, 350, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(340, 330, 360, 350, al_map_rgb(255, 255, 255));
}
void bina4_1(){ al_init_primitives_addon(); 
al_draw_filled_rectangle(410, 290, 520, 480, al_map_rgb(99, 99, 66));
al_draw_filled_triangle(405, 290, 465, 220, 525, 290, al_map_rgb(99, 33, 10));
al_draw_filled_rectangle(420, 360, 440, 380, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(460, 360, 480, 380, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(420, 320, 440, 340, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(460, 320, 480, 340, al_map_rgb(255, 255, 255));
}
void bina4_2(){
	al_init_primitives_addon();
	al_draw_filled_rectangle(400, 290, 540, 480, al_map_rgb(99, 99, 66));
	al_draw_filled_triangle(395, 290,470, 220, 545, 290, al_map_rgb(70, 33, 10));
	al_draw_filled_rectangle(420, 360, 440, 380, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(460, 360, 480, 380, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(420, 320, 440, 340, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(460, 320, 480, 340, al_map_rgb(255, 255, 255));


}
void bina5_1(){al_init_primitives_addon();
al_draw_filled_rectangle(540, 240, 680, 480, al_map_rgb(90, 90, 20));
al_draw_filled_triangle(535, 240, 610, 200, 685, 240, al_map_rgb(99, 33, 10));
al_draw_filled_rectangle(560, 300, 590, 330, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(610, 300, 640, 330, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(560, 360, 590, 390, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(610, 360, 640, 390, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(560, 245, 590, 275, al_map_rgb(255, 255, 255));
al_draw_filled_rectangle(610, 245, 640, 275, al_map_rgb(255, 255, 255));
}
void bina5_2(){
	al_init_primitives_addon();
	al_draw_filled_rectangle(590, 250, 760, 480, al_map_rgb(99, 99, 66));
	al_draw_filled_triangle(582, 250, 675, 210, 768, 250, al_map_rgb(70, 33, 10));
	al_draw_filled_rectangle(610, 310, 630, 330, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(650, 310, 670, 330, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(610, 350, 630, 370, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(650, 350, 670, 370, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(610, 270, 630, 290, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(650, 270, 670, 290, al_map_rgb(255, 255, 255));

}
void bina6_1(){al_init_primitives_addon();
	al_draw_filled_rectangle(690, 260, 790, 480, al_map_rgb(99, 99, 66));
	al_draw_filled_triangle(685, 260, 745, 210, 795, 260, al_map_rgb(99, 33, 10));
	al_draw_filled_rectangle(700, 320, 720, 340, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(740, 320, 760, 340, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(700, 360, 720, 380, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(740, 360, 760, 380, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(700, 280, 720, 300, al_map_rgb(255, 255, 255));
	al_draw_filled_rectangle(740, 280, 760, 300, al_map_rgb(255, 255, 255));
}
void bina6_2(){

}
int main(void) {
	int width = 800;
	int height = 400;

	ALLEGRO_DISPLAY *display = NULL;

	if (!al_init())
		return -1;

	display = al_create_display(width, height);

	if (!display)
		return -1;
	int ekran;
	srand(time(NULL));
	ekran = (1+rand()%10);
	switch (ekran){
	case 1:
		bina1_1();
		bina2_1();
		bina3_1();
		bina4_1();
		bina5_2();
		break;
	case 2:
		bina1_2();
		bina2_2();
		bina3_1();
		bina4_1();
		bina5_2();
		break;
	case 3:
		bina1_1();
		bina2_1();
		bina3_2();
		bina4_2();
		bina5_2();
		break;
	case 4:
		bina1_2();
		bina2_2();
		bina3_2();
		bina4_2();
		bina5_1();
		bina6_1();
		break;
	case 5:
		bina1_1();
		bina2_2();
		bina3_1();
		bina4_2();
		bina5_2();
		break;
	case 6:
		bina1_2();
		bina2_2();
		bina3_2();
		bina4_1();
		bina5_1();
		bina6_1();
		break;
	case 7:
		bina1_1();
		bina2_1();
		bina3_2();
		bina4_2();
		bina5_1();
		bina6_1();
		break;
	case 8:
		bina1_2();
		bina2_2();
		bina3_2();
		bina4_2();
		bina5_2();
		break;
	case 9:
		bina1_1();
		bina2_2();
		bina3_1();
		bina4_2();
		bina5_1();
		bina6_1();
		break;
	case 10:
		bina1_2();
		bina2_2();
		bina3_1();
		bina4_2();
		bina5_2();
		break;
	}

	al_flip_display();
	al_rest(2500.0);
	getchar();
	return 0;
}
