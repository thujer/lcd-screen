
#ifndef __SCREEN_H__
    #define __SCREEN_H__

    extern int   screen_printf(uchar screen_id, uchar x, uchar y, const char *format, ...);
    extern void  screen_init();
    extern bit   screen_proc();
    extern void  screen_select(uchar screen_id);
    extern uchar screen_get_current_screen_id();
    extern uint  screen_get_screen_buf_size();
    extern uchar screen_get_screens_count();
    extern uchar screen_get_screen_size();
    extern bit   screen_overflow_flag;

#endif
