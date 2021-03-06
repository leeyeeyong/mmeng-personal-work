#pragma once
#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <vector>
#include <tuple>

#include <windows.h>
#include <gdiplus.h>

#include "cs250vector.h"

class Demo {
  public:
    static const char *NAME;
    Demo(HINSTANCE, int);
    ~Demo(void);
    void Draw(double dtime);
    void ToggleProjectionMode(void);
    HWND Window(void) const;
  private:
    HINSTANCE instance;
    HWND window;
    HBITMAP back_buffer;
    double current_time, fps_time;
    int fps_count;
    bool project_perspective;

    Demo(const Demo&);
    Demo& operator=(const Demo&);
    static LRESULT CALLBACK demo_proc(HWND, UINT, WPARAM, LPARAM);

    typedef std::tuple<unsigned, unsigned> Edge;
    typedef std::vector<Point> VertexList;
    typedef std::vector<Edge> EdgeList;

    VertexList myCubeVertices;
    EdgeList myCubeEdgeList;

    void drawWireframe(Gdiplus::Graphics& buffer, const VertexList& vertices, const EdgeList& edges);
};

#endif // ASSIGNMENT_H

