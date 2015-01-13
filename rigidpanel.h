#ifndef RIGIDPANEL_H
#define RIGIDPANEL_H

#include "Marlin.h"

#ifdef RIGIDPANEL

void lcd_update();
void lcd_init();
void lcd_setstatus(const char* message);
void lcd_setstatuspgm(const char* message);
void lcd_setalertstatuspgm(const char* message);
void lcd_reset_alert_level();

static unsigned char blink = 0;	// Variable for visualisation of fan rotation in GLCD

#define HIDE_BACK_MENUS			//	Uncomment to hide back menus (left button will still trigger them)

#define LCD_MESSAGEPGM(x) lcd_setstatuspgm(PSTR(x))
#define LCD_ALERTMESSAGEPGM(x) lcd_setalertstatuspgm(PSTR(x))

#define LCD_UPDATE_INTERVAL 100
#define LCD_STATUS_UPDATE_INTERVAL 1000
#define LCD_TIMEOUT_TO_STATUS 30000
#define FILE_SCROLL_START_DELAY	1000
#define FILE_SCROLL_DELAY		400

void lcd_buttons_update();

extern int plaPreheatHotendTemp;
extern int plaPreheatHPBTemp;
extern int plaPreheatFanSpeed;

extern int absPreheatHotendTemp;
extern int absPreheatHPBTemp;
extern int absPreheatFanSpeed;
  
void lcd_buzz(long duration,uint16_t freq);
bool lcd_clicked();

char *itostr2(const uint8_t &x);
char *itostr31(const int &xx);
char *itostr3(const int &xx);
char *itostr3left(const int &xx);
char *itostr4(const int &xx);

char *ftostr3(const float &x);
char *ftostr31ns(const float &x); // float to string without sign character
char *ftostr31(const float &x);
char *ftostr32(const float &x);
char *ftostr5(const float &x);
char *ftostr51(const float &x);
char *ftostr52(const float &x);

#endif //RIGIDPANEL
  
#endif //RIGIDPANEL_H
