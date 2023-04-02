#include <stdio.h>

int split_data[][5] = {
    {1, 592, 64, 147, 1},
    {2, 0, 1, 0, 0},
    {3, 260, 64, 64, 1},
    {4, 2308, 64, 576, 1},
    {5, 260, 256, 64, 1},
    {6, 0, 1, 0, 0},
    {7, 1028, 64, 256, 1},
    {8, 2308, 64, 576, 1},
    {9, 260, 256, 64, 1},
    {10, 0, 1, 0, 0},
    {11, 1028, 64, 256, 1},
    {12, 2308, 64, 576, 1},
    {13, 260, 256, 64, 1},
    {14, 0, 1, 0, 0},
    {15, 1028, 128, 256, 1},
    {16, 4612, 128, 1152, 1},
    {17, 516, 512, 128, 1},
    {18, 0, 1, 0, 0},
    {19, 2052, 128, 512, 1},
    {20, 4612, 128, 1152, 1},
    {21, 516, 512, 128, 1},
    {22, 0, 1, 0, 0},
    {23, 2052, 128, 512, 1},
    {24, 4612, 128, 1152, 1},
    {25, 516, 512, 128, 1},
    {26, 0, 1, 0, 0},
    {27, 2052, 128, 512, 1},
    {28, 4612, 128, 1152, 1},
    {29, 516, 512, 128, 1},
    {30, 0, 1, 0, 0},
    {31, 2052, 128, 512, 1},
    {32, 4612, 128, 1152, 1},
    {33, 516, 512, 128, 1},
    {34, 0, 1, 0, 0},
    {35, 2052, 128, 512, 1},
    {36, 4612, 128, 1152, 1},
    {37, 516, 512, 128, 1},
    {38, 0, 1, 0, 0},
    {39, 2052, 128, 512, 1},
    {40, 4612, 128, 1152, 1},
    {41, 516, 512, 128, 1},
    {42, 0, 1, 0, 0},
    {43, 2052, 128, 512, 1},
    {44, 4612, 128, 1152, 1},
    {45, 516, 512, 128, 1},
    {46, 0, 1, 0, 0},
    {47, 2052, 256, 512, 1},
    {48, 9220, 256, 2304, 1},
    {49, 1028, 1024, 256, 1},
    {50, 0, 1, 0, 0},
    {51, 4100, 256, 1024, 1},
    {52, 9220, 256, 2304, 1},
    {53, 1028, 1024, 256, 1},
    {54, 0, 1, 0, 0},
    {55, 4100, 256, 1024, 1},
    {56, 9220, 256, 2304, 1},
    {57, 1028, 1024, 256, 1},
    {58, 0, 1, 0, 0},
    {59, 4100, 256, 1024, 1},
    {60, 9220, 256, 2304, 1},
    {61, 1028, 1024, 256, 1},
    {62, 0, 1, 0, 0},
    {63, 4100, 256, 1024, 1},
    {64, 9220, 256, 2304, 1},
    {65, 1028, 1024, 256, 1},
    {66, 0, 1, 0, 0},
    {67, 4100, 256, 1024, 1},
    {68, 9220, 256, 2304, 1},
    {69, 1028, 1024, 256, 1},
    {70, 0, 1, 0, 0},
    {71, 4100, 256, 1024, 1},
    {72, 9220, 256, 2304, 1},
    {73, 1028, 1024, 256, 1},
    {74, 0, 1, 0, 0},
    {75, 4100, 256, 1024, 1},
    {76, 9220, 256, 2304, 1},
    {77, 1028, 1024, 256, 1},
    {78, 0, 1, 0, 0},
    {79, 4100, 256, 1024, 1},
    {80, 9220, 256, 2304, 1},
    {81, 1028, 1024, 256, 1},
    {82, 0, 1, 0, 0},
    {83, 4100, 256, 1024, 1},
    {84, 9220, 256, 2304, 1},
    {85, 1028, 1024, 256, 1},
    {86, 0, 1, 0, 0},
    {87, 4100, 256, 1024, 1},
    {88, 9220, 256, 2304, 1},
    {89, 1028, 1024, 256, 1},
    {90, 0, 1, 0, 0},
    {91, 4100, 256, 1024, 1},
    {92, 9220, 256, 2304, 1},
    {93, 1028, 1024, 256, 1},
    {94, 0, 1, 0, 0},
    {95, 4100, 256, 1024, 1},
    {96, 9220, 256, 2304, 1},
    {97, 1028, 1024, 256, 1},
    {98, 0, 1, 0, 0},
    {99, 4100, 256, 1024, 1},
    {100, 9220, 256, 2304, 1},
    {101, 1028, 1024, 256, 1},
    {102, 0, 1, 0, 0},
    {103, 4100, 256, 1024, 1},
    {104, 9220, 256, 2304, 1},
    {105, 1028, 1024, 256, 1},
    {106, 0, 1, 0, 0},
    {107, 4100, 256, 1024, 1},
    {108, 9220, 256, 2304, 1},
    {109, 1028, 1024, 256, 1},
    {110, 0, 1, 0, 0},
    {111, 4100, 256, 1024, 1},
    {112, 9220, 256, 2304, 1},
    {113, 1028, 1024, 256, 1},
    {114, 0, 1, 0, 0},
    {115, 4100, 256, 1024, 1},
    {116, 9220, 256, 2304, 1},
    {117, 1028, 1024, 256, 1},
    {118, 0, 1, 0, 0},
    {119, 4100, 256, 1024, 1},
    {120, 9220, 256, 2304, 1},
    {121, 1028, 1024, 256, 1},
    {122, 0, 1, 0, 0},
    {123, 4100, 256, 1024, 1},
    {124, 9220, 256, 2304, 1},
    {125, 1028, 1024, 256, 1},
    {126, 0, 1, 0, 0},
    {127, 4100, 256, 1024, 1},
    {128, 9220, 256, 2304, 1},
    {129, 1028, 1024, 256, 1},
    {130, 0, 1, 0, 0},
    {131, 4100, 256, 1024, 1},
    {132, 9220, 256, 2304, 1},
    {133, 1028, 1024, 256, 1},
    {134, 0, 1, 0, 0},
    {135, 4100, 256, 1024, 1},
    {136, 9220, 256, 2304, 1},
    {137, 1028, 1024, 256, 1},
    {138, 0, 1, 0, 0},
    {139, 4100, 256, 1024, 1},
    {140, 9220, 256, 2304, 1},
    {141, 1028, 1024, 256, 1},
    {142, 0, 1, 0, 0},
    {143, 4100, 256, 1024, 1},
    {144, 9220, 256, 2304, 1},
    {145, 1028, 1024, 256, 1},
    {146, 0, 1, 0, 0},
    {147, 4100, 256, 1024, 1},
    {148, 9220, 256, 2304, 1},
    {149, 1028, 1024, 256, 1},
    {150, 0, 1, 0, 0},
    {151, 4100, 256, 1024, 1},
    {152, 9220, 256, 2304, 1},
    {153, 1028, 1024, 256, 1},
    {154, 0, 1, 0, 0},
    {155, 4100, 256, 1024, 1},
    {156, 9220, 256, 2304, 1},
    {157, 1028, 1024, 256, 1},
    {158, 0, 1, 0, 0},
    {159, 4100, 256, 1024, 1},
    {160, 9220, 256, 2304, 1},
    {161, 1028, 1024, 256, 1},
    {162, 0, 1, 0, 0},
    {163, 4100, 256, 1024, 1},
    {164, 9220, 256, 2304, 1},
    {165, 1028, 1024, 256, 1},
    {166, 0, 1, 0, 0},
    {167, 4100, 256, 1024, 1},
    {168, 9220, 256, 2304, 1},
    {169, 1028, 1024, 256, 1},
    {170, 0, 1, 0, 0},
    {171, 4100, 256, 1024, 1},
    {172, 9220, 256, 2304, 1},
    {173, 1028, 1024, 256, 1},
    {174, 0, 1, 0, 0},
    {175, 4100, 256, 1024, 1},
    {176, 9220, 256, 2304, 1},
    {177, 1028, 1024, 256, 1},
    {178, 0, 1, 0, 0},
    {179, 4100, 256, 1024, 1},
    {180, 9220, 256, 2304, 1},
    {181, 1028, 1024, 256, 1},
    {182, 0, 1, 0, 0},
    {183, 4100, 256, 1024, 1},
    {184, 9220, 256, 2304, 1},
    {185, 1028, 1024, 256, 1},
    {186, 0, 1, 0, 0},
    {187, 4100, 256, 1024, 1},
    {188, 9220, 256, 2304, 1},
    {189, 1028, 1024, 256, 1},
    {190, 0, 1, 0, 0},
    {191, 4100, 512, 1024, 1},
    {192, 18436, 512, 4608, 1},
    {193, 2052, 2048, 512, 1},
    {194, 0, 1, 0, 0},
    {195, 8196, 512, 2048, 1},
    {196, 18436, 512, 4608, 1},
    {197, 2052, 2048, 512, 1},
    {198, 0, 1, 0, 0},
    {199, 8196, 512, 2048, 1},
    {200, 18436, 512, 4608, 1},
    {201, 2052, 2048, 512, 1},
    {202, 0, 1, 0, 0},
    {203, 8196, 1000, 2048, 1},
    {204, 0, 1, 0, 0},
    {205, 0, 1, 0, 0},
    {206, 0, 1, 0, 0}
};
size_t row_count = 206;
