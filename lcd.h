

#ifndef __LCD_H__
    #define __LCD_H__

    extern  void    lcd_init();
    extern  bit     lcd_proc();
    //extern  char    lcd_puchar(char ch);
    //extern  void    lcd_gotoxy(uchar x, uchar y);
    extern  void    lcd_put_screen(uchar *buf, uchar buf_size);
    extern  void    lcd_moving(uchar ch1, uchar ch2);

#endif


