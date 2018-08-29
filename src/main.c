#include "color.h"

int main(int argc, char* argv[]) {
  Color a = RGBs("2196f3");
  Color b = RGBs("e91e63");
  Color c = RGBs("4caf50");
  Color d = RGBs("ffeb3b");
  Color e = RGBs("ffaaff");
  Color f = RGBs("57C7B8");
  Color g = RGBs("9C27B0");
  Color h = RGBs("795548");
  Color i = RGBs("03A9F4");
  /* Color start = RGBs("4CAF50"); */
  Color mid = RGBs("00c9a7");
  Color mid2 = RGBs("c4fcef");
  /* Color end = RGBs("FF5722"); */
  Color start = a;
  Color end = b;
  /* PrintEscape(start); */
  /* PrintColor(start); */
  /* PrintEscape(mid); */
  /* PrintColor(mid); */
  /* PrintEscape(end); */
  /* PrintColor(end); */
  printf("\033[0m================================\n");
  double step = 0.01;
  printf("RGB  :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientRGB(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("CMYK :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientCMYK(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSV  :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientHSV(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSV* :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientHSVB(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSVC :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientHSVClock(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSVD :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientHSVCounter(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSL  :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientHSL(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSL* :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientHSLB(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSLC :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientHSLClock(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSLD :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientHSLCounter(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("LAB  :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientLAB(start, end, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("\033[0m================================\n");
  Color colors[10] = {start, mid, mid2, end, start};
  printf("RGB  :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientMultiRGB(colors, 4, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("CMYK :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientMultiCMYK(colors, 4, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSV  :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientMultiHSV(colors, 4, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSV* :");
  for (double i = 0; i <= 1.0; i += step) {
    /* PrintColor(GradientMultiHSVB(colors, 4, i)); */
    PrintEscape(GradientMultiHSVB(colors, 4, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSL  :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientMultiHSL(colors, 4, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("HSL* :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientMultiHSLB(colors, 4, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("LAB  :");
  for (double i = 0; i <= 1.0; i += step) {
    PrintEscape(GradientMultiLAB(colors, 4, i));
    printf("\u2588");
  }
  printf("\033[0m\n");
  printf("\033[0m================================\n");
  step = 0.005;
  /* for(double y = 0; y < 1.0; y += step){ */
  /*   for(double x = 0; x < 1.0; x += step){ */
  /*     PrintEscape(Gradient2D(a, b, c, d, GradientRGB, x, y)); */
  /*     printf("\u2588"); */
  /*   } */
  /*   printf("\n"); */
  /* } */
  /* for(double y = 0; y < 1.0; y += step){ */
  /*   for(double x = 0; x < 1.0; x += step){ */
  /*     PrintEscape(Gradient2DB(a, b, c, d, e, GradientRGB, x, y)); */
  /*     printf("\u2588"); */
  /*   } */
  /*   printf("\n"); */
  /* } */
  for(double y = 0; y < 1.0; y += step){
    for(double x = 0; x < 1.0; x += step){
      PrintEscape(Gradient2DC(a, b, c, d, e, f, g, h, i, GradientRGB, x, y));
      printf("\u2588");
    }
    printf("\n");
  }
  /* for(double y = 0; y < 1.0; y += step){ */
  /*   for(double x = 0; x < 1.0; x += step){ */
  /*     PrintEscape(Gradient2DC(a, b, c, d, e, f, g, h, i, GradientLAB, x, y)); */
  /*     printf("\u2588"); */
  /*   } */
  /*   printf("\n"); */
  /* } */
  return 0;
}
