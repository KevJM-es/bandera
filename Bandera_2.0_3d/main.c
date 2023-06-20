#include <stdio.h>
#include <stdlib.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/freeglut.h>
#include <math.h>

/*
 * 
 */
float rotationX = 0.0;
float rotationY = 0.0;

void drawFlag() {
    //Parte de en Frente

    // Franja Azul
    glEnable(GL_DEPTH_TEST);
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.5, 0.3, 0.0);
    glVertex3f(-0.5, 0.3, 0.0);
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(0.5, 0.1, 0.0);
    glEnd();

    // Franja Blanca
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(0.5, 0.1, 0.0);
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(-0.5, -0.1, 0.0);
    glEnd();

    // Franja Azul
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(-0.5, -0.1, 0.0);
    glVertex3f(-0.5, -0.3, 0.0);
    glVertex3f(0.5, -0.3, 0.0);
    glEnd();

    ////////////////////////////////////////////////////////////////////////////

    //Escudo
    glDisable(GL_DEPTH_TEST);
    glPushMatrix(); // Guardar la matriz actual antes de hacer el escalado y la traslación
    glScalef(0.1f, 0.1f, 0.1f); // Escalar a la mitad del tamaño original
    glTranslatef(0.0f, 0.1f, 2.0f);
    //glRotatef(180, 0, 1, 0);

    float radioG = 0.18, xG = 0.0, yG = 0.0;
    float radiog = 0.08, xg = 0.0, yg = 0.0;

    glColor3f(1, 1, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, -0.5);
    glVertex2f(0.0, 0.5);
    glVertex2f(0.6, -0.5);
    glVertex2f(0.0, -0.5);
    glVertex2f(0.0, 0.5);
    glVertex2f(-0.6, -0.5);

    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, -0.47);
    glVertex2f(0.0, 0.45);
    glVertex2f(0.55, -0.47);
    glVertex2f(0.0, -0.47);
    glVertex2f(0.0, 0.45);
    glVertex2f(-0.55, -0.47);

    glEnd();
    glFlush();

    //arcoiris
    glColor3f(1, 0, 0);
    glPointSize(3);
    glBegin(GL_POINTS);
    float radioA = 0.1, xA = 0.0, yA = 0.0;
    for (float i = 0; i < (3.1416); i += 0.01) {
        xA = radioA * cos(i);
        yA = radioA * sin(i);
        glVertex2f(xA, yA + 0.25);
    }
    glEnd();
    glFlush();

    glColor3f(0.9, 0.4, 0.1);
    glPointSize(3);
    glBegin(GL_POINTS);
    float radioB = 0.09, xB = 0.0, yB = 0.0;
    for (float i = 0; i < (3.1416); i += 0.01) {
        xB = radioB * cos(i);
        yB = radioB * sin(i);
        glVertex2f(xB, yB + 0.25);
    }
    glEnd();
    glFlush();

    glColor3f(1, 1, 0);
    glPointSize(3);
    glBegin(GL_POINTS);
    float radioC = 0.08, xC = 0.0, yC = 0.0;
    for (float i = 0; i < (3.1416); i += 0.01) {
        xC = radioC * cos(i);
        yC = radioC * sin(i);
        glVertex2f(xC, yC + 0.25);
    }
    glEnd();
    glFlush();

    glColor3f(0, 1, 0);
    glPointSize(3);
    glBegin(GL_POINTS);
    float radioD = 0.07, xD = 0.0, yD = 0.0;
    for (float i = 0; i < (3.1416); i += 0.01) {
        xD = radioD * cos(i);
        yD = radioD * sin(i);
        glVertex2f(xD, yD + 0.25);
    }
    glEnd();
    glFlush();

    glColor3f(0, 1, 1);
    glPointSize(3);
    glBegin(GL_POINTS);
    float radioE = 0.06, xE = 0.0, yE = 0.0;
    for (float i = 0; i < (3.1416); i += 0.01) {
        xE = radioE * cos(i);
        yE = radioE * sin(i);
        glVertex2f(xE, yE + 0.25);
    }
    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glPointSize(3);
    glBegin(GL_POINTS);
    float radioF = 0.05, xF = 0.0, yF = 0.0;
    for (float i = 0; i < (3.1416); i += 0.01) {
        xF = radioF * cos(i);
        yF = radioF * sin(i);
        glVertex2f(xF, yF + 0.25);
    }
    glEnd();
    glFlush();

    glColor3f(0.5, 0.2, 0.9);
    glPointSize(3);
    glBegin(GL_POINTS);
    float radioGG = 0.04, xGG = 0.0, yGG = 0.0;
    for (float i = 0; i < (3.1416); i += 0.01) {
        xGG = radioGG * cos(i);
        yGG = radioGG * sin(i);
        glVertex2f(xGG, yGG + 0.25);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0.5, 0.6);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xG = radioG * cos(i);
        yG = radioG * sin(i);
        glVertex2f(xG, yG + 0.10);
    }
    glEnd();
    glFlush();

    //montañas
    glColor3f(0.1, 0.5, 0.8);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, -0.47);
    glVertex2f(0.0, -0.15);
    glVertex2f(0.36, -0.15);
    glVertex2f(0.55, -0.47);
    glVertex2f(0.0, -0.47);
    glVertex2f(0.0, -0.15);
    glVertex2f(-0.36, -0.15);
    glVertex2f(-0.55, -0.47);

    glEnd();
    glFlush();

    glColor3f(0, 1, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.18, 0.0);
    glVertex2f(-0.45, -0.3);
    glVertex2f(0.05, -0.3);

    glEnd();
    glFlush();

    glColor3f(0.1, 0.3, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.105, -0.1);
    glVertex2f(0.05, -0.3);
    glVertex2f(0.15, -0.3);
    glVertex2f(-0.06, -0.05);

    glEnd();
    glFlush();

    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, -0.12);
    glVertex2f(0.15, -0.3);
    glVertex2f(0.25, -0.3);
    glVertex2f(0.04, -0.07);

    glEnd();
    glFlush();

    glColor3f(0.1, 0.3, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.10, -0.14);
    glVertex2f(0.25, -0.3);
    glVertex2f(0.35, -0.3);
    glVertex2f(0.14, -0.09);

    glEnd();
    glFlush();

    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.21, -0.16);
    glVertex2f(0.35, -0.3);
    glVertex2f(0.40, -0.3);
    glVertex2f(0.25, -0.11);

    glEnd();
    glFlush();

    //Gorrito
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xg = radiog * cos(i);
        yg = radiog * sin(i);
        glVertex2f(xg, yg + 0.136);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.2);
    glVertex2f(-0.05, 0.1);
    glVertex2f(0.05, 0.1);
    glEnd();
    glFlush();

    glColor3f(1, 1, 0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(0.0, 0.10);
    glVertex2f(0.0, -0.12);

    glEnd();
    glFlush();

    //laureles
    float radio1 = 0.06, x1 = 0.0, y1 = 0.0;
    float radio2 = 0.06, x2 = 0.0, y2 = 0.0;
    float radioP = 0.04, xP = 0.0, yP = 0.0;
    float radioL = 0.83, xL = 0.0, yL = 0.0;
    float radiop = 0.01, xp = 0.0, yp = 0.0;

    glColor3f(0, 1, 0);
    glPointSize(2);
    glBegin(GL_POINTS);
    for (float i = -3.1416 / 6; i < (3.1416 * 7) / 6; i += 0.001) {
        xL = radioL * cos(i);
        yL = radioL * sin(-i);
        glVertex2f(xL, yL - 0.02);
    }
    glEnd();
    glFlush();

    //Laureles lado izquierdo
    //1er Laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(-0.1085, -0.8729);
    glVertex2f(-0.1364, -0.8877);
    glVertex2f(-0.1585, -0.9054);
    glVertex2f(-0.1817, -0.9261);
    glVertex2f(-0.2088, -0.9380);
    glVertex2f(-0.2442, -0.9517);
    glVertex2f(-0.3158, -0.9526);
    glVertex2f(-0.4143, -0.9475);
    glVertex2f(-0.4738, -0.9095);
    glVertex2f(-0.4209, -0.8922);
    glVertex2f(-0.4402, -0.8880);
    glVertex2f(-0.4982, -0.8374);
    glVertex2f(-0.4194, -0.8324);
    glVertex2f(-0.4546, -0.7951);
    glVertex2f(-0.3292, -0.7856);
    glVertex2f(-0.3884, -0.7032);
    glVertex2f(-0.3564, -0.6979);
    glVertex2f(-0.3876, -0.6392);
    glVertex2f(-0.3632, -0.6384);
    glVertex2f(-0.3387, -0.6426);
    glVertex2f(-0.3024, -0.6524);
    glVertex2f(-0.3096, -0.6015);
    glVertex2f(-0.2549, -0.6177);
    glVertex2f(-0.2228, -0.6410);
    glVertex2f(-0.1938, -0.6643);
    glVertex2f(-0.1611, -0.7346);
    glVertex2f(-0.1538, -0.7573);
    glVertex2f(-0.1520, -0.7849);
    glVertex2f(-0.1271, -0.8154);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(-0.4159, -0.7395);
    glVertex2f(-0.4737, -0.7533);
    glVertex2f(-0.4124, -0.7319);
    glVertex2f(-0.4170, -0.6809);

    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.4737, yp - 0.7533);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.4170, yp - 0.6809);
    }
    glEnd();
    glFlush();

    //2do laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(-0.4516, -0.7070);
    glVertex2f(-0.4373, -0.6274);
    glVertex2f(-0.4660, -0.5843);
    glVertex2f(-0.4692, -0.5429);
    glVertex2f(-0.5122, -0.4505);
    glVertex2f(-0.5457, -0.4999);
    glVertex2f(-0.5457, -0.5365);
    glVertex2f(-0.5663, -0.5107);
    glVertex2f(-0.5850, -0.4358);
    glVertex2f(-0.6, -0.45);
    glVertex2f(-0.6275, -0.5073);
    glVertex2f(-0.6352, -0.5439);
    glVertex2f(-0.6267, -0.5821);
    glVertex2f(-0.6548, -0.5604);
    glVertex2f(-0.7132, -0.5439);
    glVertex2f(-0.7, -0.6);
    glVertex2f(-0.7416, -0.5826);
    glVertex2f(-0.7386, -0.6105);
    glVertex2f(-0.6974, -0.6652);
    glVertex2f(-0.7154, -0.6751);
    glVertex2f(-0.7690, -0.6763);
    glVertex2f(-0.7132, -0.7175);
    glVertex2f(-0.6808, -0.7454);
    glVertex2f(-0.6132, -0.7659);
    glVertex2f(-0.5236, -0.7454);
    glVertex2f(-0.4673, -0.7203);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(-0.6797, -0.5107);
    glVertex2f(-0.7419, -0.5007);
    glVertex2f(-0.6606, -0.4549);
    glVertex2f(-0.6655, -0.5054);

    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.7419, yp - 0.5007);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.6655, yp - 0.4549);
    }
    glEnd();
    glFlush();

    //3er laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(-0.7019, -0.4925);
    glVertex2f(-0.6642, -0.4332);
    glVertex2f(-0.6583, -0.3564);
    glVertex2f(-0.6757, -0.3133);
    glVertex2f(-0.7075, -0.2754);
    glVertex2f(-0.7221, -0.3130);
    glVertex2f(-0.7260, -0.2159);
    glVertex2f(-0.7619, -0.2641);
    glVertex2f(-0.7855, -0.3205);
    glVertex2f(-0.8277, -0.2953);
    glVertex2f(-0.9248, -0.2694);
    glVertex2f(-0.8990, -0.3318);
    glVertex2f(-0.9605, -0.3318);
    glVertex2f(-0.9088, -0.3915);
    glVertex2f(-0.8812, -0.4495);
    glVertex2f(-0.8303, -0.4830);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(-0.7950, -0.2767);
    glVertex2f(-0.8495, -0.2567);
    glVertex2f(-0.7849, -0.2745);
    glVertex2f(-0.7726, -0.2171);

    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.8495, yp - 0.2567);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.7726, yp - 0.2171);
    }
    glEnd();
    glFlush();

    //4to laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(-0.8050, -0.2206);
    glVertex2f(-0.7739, -0.1906);
    glVertex2f(-0.7451, -0.1181);
    glVertex2f(-0.7462, -0.0697);
    glVertex2f(-0.7678, -0.0712);
    glVertex2f(-0.7564, -0.0534);
    glVertex2f(-0.7623, 0.0200);
    glVertex2f(-0.8153, -0.0259);

    glVertex2f(-0.8435, -0.1024);
    glVertex2f(-0.8810, -0.0386);
    glVertex2f(-0.9581, 0.0269);
    glVertex2f(-0.9593, -0.0524);
    glVertex2f(-1.0065, -0.0386);
    glVertex2f(-0.9904, -0.1250);
    glVertex2f(-0.9466, -0.1803);
    glVertex2f(-0.9466, -0.1803);
    glVertex2f(-0.8948, -0.2125);
    glVertex2f(-0.8250, -0.2161);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(-0.8350, -0.0144);
    glVertex2f(-0.8899, 0.0153);
    glVertex2f(-0.8255, -0.0135);
    glVertex2f(-0.8000, 0.0195);

    glEnd();
    glFlush();

    glColor3f(1, 0.1, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.8899, yp + 0.0153);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0.1, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.8000, yp + 0.0195);
    }
    glEnd();
    glFlush();

    //5to laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(-0.81, 0.05);
    glVertex2f(-0.7606, 0.0712);
    glVertex2f(-0.7263, 0.1312);
    glVertex2f(-0.7263, 0.1941);
    glVertex2f(-0.7549, 0.1712);
    glVertex2f(-0.7616, 0.2275);
    glVertex2f(-0.8095, 0.1663);
    glVertex2f(-0.8305, 0.1883);
    glVertex2f(-0.8886, 0.2812);
    glVertex2f(-0.9154, 0.2230);
    glVertex2f(-0.9485, 0.2423);
    glVertex2f(-0.9581, 0.1852);
    glVertex2f(-0.9581, 0.1506);
    glVertex2f(-0.9312, 0.0922);
    glVertex2f(-0.9049, 0.0665);
    glVertex2f(-0.8613, 0.0428);
    glVertex2f(-0.8433, 0.0351);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(-0.7950, 0.2336);
    glVertex2f(-0.8343, 0.2680);
    glVertex2f(-0.7850, 0.2336);
    glVertex2f(-0.7400, 0.2480);

    glEnd();
    glFlush();

    glColor3f(1, 0.1, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.8343, yp + 0.2680);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0.1, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp - 0.7400, yp + 0.2480);
    }
    glEnd();
    glFlush();

    //Laureles lado derecho
    //1er Laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(0.1085, -0.8729);
    glVertex2f(0.1364, -0.8877);
    glVertex2f(0.1585, -0.9054);
    glVertex2f(0.1817, -0.9261);
    glVertex2f(0.2088, -0.9380);
    glVertex2f(0.2442, -0.9517);
    glVertex2f(0.3158, -0.9526);
    glVertex2f(0.4143, -0.9475);
    glVertex2f(0.4738, -0.9095);
    glVertex2f(0.4209, -0.8922);
    glVertex2f(0.4402, -0.8880);
    glVertex2f(0.4982, -0.8374);
    glVertex2f(0.4194, -0.8324);
    glVertex2f(0.4546, -0.7951);
    glVertex2f(0.3292, -0.7856);
    glVertex2f(0.3884, -0.7032);
    glVertex2f(0.3564, -0.6979);
    glVertex2f(0.3876, -0.6392);
    glVertex2f(0.3632, -0.6384);
    glVertex2f(0.3387, -0.6426);
    glVertex2f(0.3024, -0.6524);
    glVertex2f(0.3096, -0.6015);
    glVertex2f(0.2549, -0.6177);
    glVertex2f(0.2228, -0.6410);
    glVertex2f(0.1938, -0.6643);
    glVertex2f(0.1611, -0.7346);
    glVertex2f(0.1538, -0.7573);
    glVertex2f(0.1520, -0.7849);
    glVertex2f(0.1271, -0.8154);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(+0.4159, -0.7395);
    glVertex2f(+0.4737, -0.7533);
    glVertex2f(+0.4124, -0.7319);
    glVertex2f(+0.4170, -0.6809);

    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.4737, yp - 0.7533);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.4170, yp - 0.6809);
    }
    glEnd();
    glFlush();

    //2do laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(0.4516, -0.7070);
    glVertex2f(0.4373, -0.6274);
    glVertex2f(0.4660, -0.5843);
    glVertex2f(0.4692, -0.5429);
    glVertex2f(0.5122, -0.4505);
    glVertex2f(0.5457, -0.4999);
    glVertex2f(0.5457, -0.5365);
    glVertex2f(0.5663, -0.5107);
    glVertex2f(0.5850, -0.4358);
    glVertex2f(0.6, -0.45);
    glVertex2f(0.6275, -0.5073);
    glVertex2f(0.6352, -0.5439);
    glVertex2f(0.6267, -0.5821);
    glVertex2f(0.6548, -0.5604);
    glVertex2f(0.7132, -0.5439);
    glVertex2f(0.7, -0.6);
    glVertex2f(0.7416, -0.5826);
    glVertex2f(0.7386, -0.6105);
    glVertex2f(0.6974, -0.6652);
    glVertex2f(0.7154, -0.6751);
    glVertex2f(0.7690, -0.6763);
    glVertex2f(0.7132, -0.7175);
    glVertex2f(0.6808, -0.7454);
    glVertex2f(0.6132, -0.7659);
    glVertex2f(0.5236, -0.7454);
    glVertex2f(0.4673, -0.7203);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(+0.6797, -0.5107);
    glVertex2f(+0.7419, -0.5007);
    glVertex2f(+0.6606, -0.4549);
    glVertex2f(+0.6655, -0.5054);


    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.7419, yp - 0.5007);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.6655, yp - 0.4549);
    }
    glEnd();
    glFlush();

    //3er laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(0.7019, -0.4925);
    glVertex2f(0.6642, -0.4332);
    glVertex2f(0.6583, -0.3564);
    glVertex2f(0.6757, -0.3133);
    glVertex2f(0.7075, -0.2754);
    glVertex2f(0.7221, -0.3130);
    glVertex2f(0.7260, -0.2159);
    glVertex2f(0.7619, -0.2641);
    glVertex2f(0.7855, -0.3205);
    glVertex2f(0.8277, -0.2953);
    glVertex2f(0.9248, -0.2694);
    glVertex2f(0.8990, -0.3318);
    glVertex2f(0.9605, -0.3318);
    glVertex2f(0.9088, -0.3915);
    glVertex2f(0.8812, -0.4495);
    glVertex2f(0.8303, -0.4830);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(0.7950, -0.2767);
    glVertex2f(0.8495, -0.2567);
    glVertex2f(0.7849, -0.2745);
    glVertex2f(0.7726, -0.2171);

    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.8495, yp - 0.2567);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.7726, yp - 0.2171);
    }
    glEnd();
    glFlush();

    //4to laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(0.8050, -0.2206);
    glVertex2f(0.7739, -0.1906);
    glVertex2f(0.7451, -0.1181);
    glVertex2f(0.7462, -0.0697);
    glVertex2f(0.7678, -0.0712);
    glVertex2f(0.7564, -0.0534);
    glVertex2f(0.7623, 0.0200);
    glVertex2f(0.8153, -0.0259);

    glVertex2f(0.8435, -0.1024);
    glVertex2f(0.8810, -0.0386);
    glVertex2f(0.9581, 0.0269);
    glVertex2f(0.9593, -0.0524);
    glVertex2f(1.0065, -0.0386);
    glVertex2f(0.9904, -0.1250);
    glVertex2f(0.9466, -0.1803);
    glVertex2f(0.9466, -0.1803);
    glVertex2f(0.8948, -0.2125);
    glVertex2f(0.8250, -0.2161);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(0.8350, -0.0144);
    glVertex2f(0.8899, 0.0153);
    glVertex2f(0.8255, -0.0135);
    glVertex2f(0.8000, 0.0195);

    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.8899, yp + 0.0153);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.8000, yp + 0.0195);
    }
    glEnd();
    glFlush();

    //5to laurel
    glColor3f(0, 1, 0);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(0.81, 0.05);
    glVertex2f(0.7606, 0.0712);
    glVertex2f(0.7263, 0.1312);
    glVertex2f(0.7263, 0.1941);
    glVertex2f(0.7549, 0.1712);
    glVertex2f(0.7616, 0.2275);
    glVertex2f(0.8095, 0.1663);
    glVertex2f(0.8305, 0.1883);
    glVertex2f(0.8886, 0.2812);
    glVertex2f(0.9154, 0.2230);
    glVertex2f(0.9485, 0.2423);
    glVertex2f(0.9581, 0.1852);
    glVertex2f(0.9581, 0.1506);
    glVertex2f(0.9312, 0.0922);
    glVertex2f(0.9049, 0.0665);
    glVertex2f(0.8613, 0.0428);
    glVertex2f(0.8433, 0.0351);

    glEnd();
    glFlush();

    glColor3f(0, 0, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glBegin(GL_POINTS);

    glVertex2f(0.7950, 0.2336);
    glVertex2f(0.8343, 0.2680);
    glVertex2f(0.7850, 0.2336);
    glVertex2f(0.7400, 0.2480);

    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.8343, yp + 0.2680);
    }
    glEnd();
    glFlush();

    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    for (float i = 0; i < 10; i += 0.01) {
        xp = radiop * cos(i);
        yp = radiop * sin(i);
        glVertex2f(xp + 0.7400, yp + 0.2480);
    }
    glEnd();
    glFlush();

    //moñito parte izquierda
    glColor3f(0, 0, 1);
    glPointSize(3);
    glBegin(GL_POLYGON);

    glVertex2f(-0.0460, -0.8729);
    glVertex2f(-0.1085, -0.8729);
    glVertex2f(-0.1271, -0.8154);
    glVertex2f(-0.1341, -0.7662);
    glVertex2f(-0.1315, -0.7317);
    glVertex2f(-0.1220, -0.7189);
    glVertex2f(-0.1090, -0.7184);
    glVertex2f(-0.0885, -0.7398);

    glVertex2f(-0.0238, -0.8422);
    glVertex2f(-0.0044, -0.8228);
    glVertex2f(-0.0281, -0.7376);
    glVertex2f(-0.0594, -0.7139);
    glVertex2f(-0.1090, -0.7184);

    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glPointSize(3);
    glBegin(GL_POLYGON);

    glVertex2f(-0.0460, -0.8729);
    glVertex2f(-0.0555, -0.8794);
    glVertex2f(-0.0671, -0.8877);
    glVertex2f(-0.0797, -0.8969);
    glVertex2f(-0.0902, -0.9077);
    glVertex2f(-0.1, -0.92);
    glVertex2f(-0.1106, -0.9330);
    glVertex2f(-0.1164, -0.9446);
    glVertex2f(-0.1205, -0.9560);
    glVertex2f(-0.1215, -0.9675);
    glVertex2f(-0.1218, -0.9795);
    glVertex2f(-0.1203, -0.9919);
    glVertex2f(-0.0958, -1.0052);

    glEnd();
    glFlush();

    glColor3f(0.8, 0, 0);
    glPointSize(3);
    glBegin(GL_POLYGON);

    glVertex2f(-0.0829, -0.7486);
    glVertex2f(-0.0881, -0.7534);
    glVertex2f(-0.0798, -0.8135);
    glVertex2f(-0.0562, -0.8326);

    glEnd();
    glFlush();

    //monito parte derecha
    glColor3f(0, 0, 1);
    glPointSize(3);
    glBegin(GL_POLYGON);

    glVertex2f(0.0460, -0.8729);
    glVertex2f(0.1085, -0.8729);
    glVertex2f(0.1271, -0.8154);
    glVertex2f(0.1341, -0.7662);
    glVertex2f(0.1315, -0.7317);
    glVertex2f(0.1220, -0.7189);
    glVertex2f(0.1090, -0.7184);
    glVertex2f(0.0885, -0.7398);

    glVertex2f(0.0238, -0.8422);
    glVertex2f(0.0044, -0.8228);
    glVertex2f(0.0281, -0.7376);
    glVertex2f(0.0594, -0.7139);
    glVertex2f(0.1090, -0.7184);

    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glPointSize(3);
    glBegin(GL_POLYGON);

    glVertex2f(0.0460, -0.8729);
    glVertex2f(0.0555, -0.8794);
    glVertex2f(0.0671, -0.8877);
    glVertex2f(0.0797, -0.8969);
    glVertex2f(0.0902, -0.9077);
    glVertex2f(0.1, -0.92);
    glVertex2f(0.1106, -0.9330);
    glVertex2f(0.1164, -0.9446);
    glVertex2f(0.1205, -0.9560);
    glVertex2f(0.1215, -0.9675);
    glVertex2f(0.1218, -0.9795);
    glVertex2f(0.1203, -0.9919);
    glVertex2f(0.0958, -1.0052);

    glEnd();
    glFlush();

    glColor3f(0.8, 0, 0);
    glPointSize(3);
    glBegin(GL_POLYGON);

    glVertex2f(0.0829, -0.7486);
    glVertex2f(0.0881, -0.7534);
    glVertex2f(0.0798, -0.8135);
    glVertex2f(0.0562, -0.8326);

    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glPointSize(3);
    glBegin(GL_POLYGON);

    glVertex2f(-0.0188, -0.8373);
    glVertex2f(-0.0195, -0.8948);
    glVertex2f(0.0044, -0.8957);
    glVertex2f(0.0120, -0.8919);
    glVertex2f(0.0210, -0.8924);
    glVertex2f(0.0261, -0.8880);
    glVertex2f(0.0256, -0.8760);
    glVertex2f(0.0222, -0.8558);
    glVertex2f(0.0211, -0.8447);
    glVertex2f(0.0084, -0.8304);
    glVertex2f(-0.0040, -0.8220);

    glEnd();
    glFlush();

    ////////////////////////////////////////////////////////////////////////////////    
    //banderas

    //Lado Izquierdo
    //1er bandera
    glColor3f(1, 1, 0);
    glLineWidth(6);
    glBegin(GL_LINES);

    glVertex2f(-0.20, 0.150);
    glVertex2f(-0.48, 0.44);
    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.2096, 0.1505);
    glVertex2f(-0.4645, 0.4254);
    glVertex2f(-0.4645, 0.4254);
    glVertex2f(-0.4815, 0.1804);
    glVertex2f(-0.4777, -0.0093);
    glVertex2f(-0.3536, -0.089);
    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(-0.2667, 0.2119);
    glVertex2f(-0.2708, 0.1610);
    glVertex2f(-0.2670, 0.1201);
    glVertex2f(-0.2632, 0.0991);
    glVertex2f(-0.2542, 0.0763);

    glVertex2f(-0.3522, 0.3042);
    glVertex2f(-0.3650, 0.1072);
    glVertex2f(-0.3584, 0.0483);
    glVertex2f(-0.3291, -0.0486);

    glEnd();
    glFlush();

    //2da bandera
    glColor3f(1, 1, 0);
    glLineWidth(6);
    glBegin(GL_LINES);

    glVertex2f(-0.35, -0.08);
    glVertex2f(-0.65, 0.11);
    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.3536, -0.0894);
    glVertex2f(-0.6364, 0.0950);
    glVertex2f(-0.6418, -0.0870);
    glVertex2f(-0.6444, -0.1575);
    glVertex2f(-0.6285, -0.2763);
    glVertex2f(-0.6091, -0.3440);
    glVertex2f(-0.6, -0.4);
    glVertex2f(-0.5868, -0.4346);
    glVertex2f(-0.5706, -0.4511);

    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(-0.4178, -0.0480);
    glVertex2f(-0.4148, -0.1235);
    glVertex2f(-0.4009, -0.1681);

    glVertex2f(-0.5170, 0.0160);
    glVertex2f(-0.5180, -0.1113);
    glVertex2f(-0.5180, -0.1947);
    glVertex2f(-0.4823, -0.3038);

    glEnd();
    glFlush();

    //Parte Superior
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.0254, 0.4644);
    glVertex2f(-0.0335, 0.4835);
    glVertex2f(-0.0289, 0.5285);
    glVertex2f(-0.0161, 0.6240);
    glVertex2f(-0.0020, 0.6527);
    glVertex2f(-0, 0.5);

    glEnd();
    glFlush();

    //Parte inferior
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5072, -0.5);
    glVertex2f(-0.4524, -0.5339);
    glVertex2f(-0.4091, -0.5542);
    glVertex2f(-0.3761, -0.5641);
    glVertex2f(-0.3493, -0.5777);
    glVertex2f(-0.3238, -0.5855);
    glVertex2f(-0.3098, -0.5889);
    glVertex2f(-0.2758, -0.5916);
    glVertex2f(-0.2170, -0.5917);
    glVertex2f(-0.1749, -0.5842);
    glVertex2f(-0.1373, -0.5735);
    glVertex2f(-0.1051, -0.5619);
    glVertex2f(-0.0832, -0.5561);
    glVertex2f(-0.0683, -0.5511);
    glVertex2f(-0.0530, -0.5449);
    glVertex2f(-0.0425, -0.5340);
    glVertex2f(-0.0419, -0.5412);
    glVertex2f(-0.0639, -0.5749);
    glVertex2f(-0.0706, -0.5918);
    glVertex2f(-0.0709, -0.6111);
    glVertex2f(-0.0572, -0.6241);
    glVertex2f(-0.0417, -0.6280);
    glVertex2f(-0.0358, -0.6336);
    glVertex2f(-0.0253, -0.6367);
    glVertex2f(-0.0261, -0.6113);
    glVertex2f(-0.0118, -0.5610);
    glVertex2f(-0.0071, -0.5275);
    glVertex2f(-0, -0.5);

    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.3656, -0.5009);
    glVertex2f(-0.2945, -0.5315);
    glVertex2f(-0.2532, -0.5582);
    glVertex2f(-0.0784, -0.5315);
    glVertex2f(-0.1464, -0.5315);
    glVertex2f(-0.1998, -0.5);

    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(-0.0253, -0.6367);
    glVertex2f(-0.0261, -0.6113);
    glVertex2f(-0.0118, -0.5610);
    glVertex2f(-0.0071, -0.5275);
    glVertex2f(-0, -0.5);
    glVertex2f(-0, -0.6477);

    glEnd();
    glFlush();

    //Lado derecho
    //1er bandera
    glColor3f(1, 1, 0);
    glLineWidth(6);
    glBegin(GL_LINES);

    glVertex2f(0.20, 0.150);
    glVertex2f(0.48, 0.44);
    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.2096, 0.1505);
    glVertex2f(0.4645, 0.4254);
    glVertex2f(0.4645, 0.4254);
    glVertex2f(0.4815, 0.1804);
    glVertex2f(0.4777, -0.0093);
    glVertex2f(0.3536, -0.089);
    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glPointSize(4);
    glBegin(GL_POLYGON);

    glVertex2f(0.2667, 0.2119);
    glVertex2f(0.2708, 0.1610);
    glVertex2f(0.2670, 0.1201);
    glVertex2f(0.2632, 0.0991);
    glVertex2f(0.2542, 0.0763);

    glVertex2f(0.3522, 0.3042);
    glVertex2f(0.3650, 0.1072);
    glVertex2f(0.3584, 0.0483);
    glVertex2f(0.3291, -0.0486);

    glEnd();
    glFlush();

    //2da bandera
    glColor3f(1, 1, 0);
    glLineWidth(6);
    glBegin(GL_LINES);

    glVertex2f(0.35, -0.08);
    glVertex2f(0.65, 0.11);
    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.3536, -0.0894);
    glVertex2f(0.6364, 0.0950);
    glVertex2f(0.6418, -0.0870);
    glVertex2f(0.6444, -0.1575);
    glVertex2f(0.6285, -0.2763);
    glVertex2f(0.6091, -0.3440);
    glVertex2f(0.6, -0.4);
    glVertex2f(0.5868, -0.4346);
    glVertex2f(0.5706, -0.4511);

    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex2f(0.4178, -0.0480);
    glVertex2f(0.4148, -0.1235);
    glVertex2f(0.4009, -0.1681);

    glVertex2f(0.5170, 0.0160);
    glVertex2f(0.5180, -0.1113);
    glVertex2f(0.5180, -0.1947);
    glVertex2f(0.4823, -0.3038);

    glEnd();
    glFlush();

    //Parte Superior
    glColor3f(1, 1, 0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(0, 0.5);
    glVertex2f(0.0031, 0.7362);

    glEnd();
    glFlush();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.0254, 0.4644);
    glVertex2f(0.0335, 0.4835);
    glVertex2f(0.0289, 0.5285);
    glVertex2f(0.0161, 0.6240);
    glVertex2f(0.0020, 0.6527);
    glVertex2f(0, 0.5);

    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.0097, 0.4902);
    glVertex2f(0.0209, 0.5080);
    glVertex2f(0.0247, 0.5273);
    glVertex2f(0.0260, 0.5503);
    glVertex2f(0.0177, 0.6122);
    glVertex2f(0.0102, 0.5991);
    glVertex2f(0, 0.54);

    glEnd();
    glFlush();

    //Parte inferior
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.5072, -0.5);
    glVertex2f(0.4524, -0.5339);
    glVertex2f(0.4091, -0.5542);
    glVertex2f(0.3761, -0.5641);
    glVertex2f(0.3493, -0.5777);
    glVertex2f(0.3238, -0.5855);
    glVertex2f(0.3098, -0.5889);
    glVertex2f(0.2758, -0.5916);
    glVertex2f(0.2170, -0.5917);
    glVertex2f(0.1749, -0.5842);
    glVertex2f(0.1373, -0.5735);
    glVertex2f(0.1051, -0.5619);
    glVertex2f(0.0832, -0.5561);
    glVertex2f(0.0683, -0.5511);
    glVertex2f(0.0530, -0.5449);
    glVertex2f(0.0425, -0.5340);
    glVertex2f(0.0419, -0.5412);
    glVertex2f(0.0639, -0.5749);
    glVertex2f(0.0706, -0.5918);
    glVertex2f(0.0709, -0.6111);
    glVertex2f(0.0572, -0.6241);
    glVertex2f(0.0417, -0.6280);
    glVertex2f(0.0358, -0.6336);
    glVertex2f(0.0253, -0.6367);
    glVertex2f(0.0261, -0.6113);
    glVertex2f(0.0118, -0.5610);
    glVertex2f(0.0071, -0.5275);
    glVertex2f(0, -0.5);

    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.3656, -0.5009);
    glVertex2f(0.2945, -0.5315);
    glVertex2f(0.2532, -0.5582);
    glVertex2f(0.0784, -0.5315);
    glVertex2f(0.1464, -0.5315);
    glVertex2f(0.1998, -0.5);


    glEnd();
    glFlush();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.0253, -0.6367);
    glVertex2f(0.0261, -0.6113);
    glVertex2f(0.0118, -0.5610);
    glVertex2f(0.0071, -0.5275);
    glVertex2f(0, -0.5);
    glVertex2f(0, -0.6477);

    glEnd();
    glFlush();

    glPopMatrix();
    glEnable(GL_DEPTH_TEST);

    ////////////////////////////////////////////////////////////////////////////

    //Parte Trasera
    // Franja Azul
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.5, 0.3, 0.2);
    glVertex3f(-0.5, 0.3, 0.2);
    glVertex3f(-0.5, 0.1, 0.2);
    glVertex3f(0.5, 0.1, 0.2);
    glEnd();

    // Franja Blanca
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.5, 0.1, 0.2);
    glVertex3f(0.5, 0.1, 0.2);
    glVertex3f(0.5, -0.1, 0.2);
    glVertex3f(-0.5, -0.1, 0.2);
    glEnd();

    // Franja Azul
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.5, -0.1, 0.2);
    glVertex3f(-0.5, -0.1, 0.2);
    glVertex3f(-0.5, -0.3, 0.2);
    glVertex3f(0.5, -0.3, 0.2);
    glEnd();

    ////////////////////////////////////////////////////////////////////////////

    //Parte Superior
    glColor3f(0.0, 0.4, 0.8); // Azul
    glBegin(GL_QUADS);
    glVertex3f(-0.5, 0.3, 0.0);
    glVertex3f(0.5, 0.3, 0.0);
    glVertex3f(0.5, 0.3, 0.2);
    glVertex3f(-0.5, 0.3, 0.2);
    glEnd();

    // Franja Azul Lado Derecho
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.5, 0.3, 0.0);
    glVertex3f(0.5, 0.1, 0.0);
    glVertex3f(0.5, 0.1, 0.2);
    glVertex3f(0.5, 0.3, 0.2);
    glEnd();

    // Franja Blanca Lado Derecho
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(0.5, 0.1, 0.0);
    glVertex3f(0.5, 0.1, 0.2);
    glVertex3f(0.5, -0.1, 0.2);
    glEnd();

    // Franja Azul Lado Derecho
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.5, -0.3, 0.0);
    glVertex3f(0.5, -0.1, 0.0);
    glVertex3f(0.5, -0.1, 0.2);
    glVertex3f(0.5, -0.3, 0.2);
    glEnd();


    ////////////////////////////////////////////////////////////////////////////////

    //Parte Inferior
    glColor3f(0.0, 0.4, 0.8); // Azul
    glBegin(GL_QUADS);
    glVertex3f(0.5, -0.3, 0.0);
    glVertex3f(-0.5, -0.3, 0.0);
    glVertex3f(-0.5, -0.3, 0.2);
    glVertex3f(0.5, -0.3, 0.2);
    glEnd();

    // Franja Azul Lado Izquierdo
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.5, 0.3, 0.0);
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(-0.5, 0.1, 0.2);
    glVertex3f(-0.5, 0.3, 0.2);
    glEnd();

    // Franja Blanca Lado Izquierdo
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.1, 0.0);
    glVertex3f(-0.5, 0.1, 0.0);
    glVertex3f(-0.5, 0.1, 0.2);
    glVertex3f(-0.5, -0.1, 0.2);
    glEnd();

    // Franja Azul Lado Izquierdo
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.5, -0.3, 0.0);
    glVertex3f(-0.5, -0.1, 0.0);
    glVertex3f(-0.5, -0.1, 0.2);
    glVertex3f(-0.5, -0.3, 0.2);
    glEnd();

    ////////////////////////////////////////////////////////////////////////////////

    // Asta de la bandera
    glColor3f(0.6, 0.6, 0.6);
    glPushMatrix();
    glTranslatef(-0.55, -0.6, 0.1);
    glRotatef(-90.0, 1.0, 0.0, 0.0);
    GLUquadric* cylinder = gluNewQuadric();
    gluCylinder(cylinder, 0.05, 0.05, 0.9, 20, 20);
    glPopMatrix();
    gluDeleteQuadric(cylinder);

    // Esfera en la punta del asta
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glTranslatef(-0.55, 0.35, 0.1);
    glutSolidSphere(0.06, 20, 20);
    glPopMatrix();


}

void display() {
    glMatrixMode(GL_MODELVIEW);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();


    glTranslatef(0.0, 0.0, -2.5); // Traslación de la bandera
    glRotatef(rotationX, 1.0, 0.0, 0.0); // Rotación en el eje X
    glRotatef(rotationY, 0.0, 1.0, 0.0); // Rotación en el eje Y

    drawFlag();


    //glDisable(GL_DEPTH_TEST);
    //dibujarescudo();
    //glEnable(GL_DEPTH_TEST);


    glFlush();
    glutSwapBuffers();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (GLfloat) width / (GLfloat) height, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void keyboardFunc(unsigned char key, int x, int y) {
    switch (key) {
        case 'w':
        case 'W':
            rotationX += 5.0;
            break;
        case 's':
        case 'S':
            rotationX -= 5.0;
            break;
        case 'a':
        case 'A':
            rotationY -= 5.0;
            break;
        case 'd':
        case 'D':
            rotationY += 5.0;
            break;
        case 27: // Tecla Esc
            exit(0);
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Bandera de El Salvador en 3D");

    glClearColor(0.8, 0.0, 0.0, 1.0);


    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboardFunc);

    glutMainLoop();

    return 0;
}
