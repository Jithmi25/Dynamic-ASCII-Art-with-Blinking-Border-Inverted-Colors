#include <stdio.h>
#include <windows.h>

void print_pattern(const char *pattern_color, const char *border_color)
{
    // Apply border color and print top border
    printf("%s", border_color);
    for (int i = 0; i < 80; i++)
        printf(" ");
    printf("\n");

    // Left and right border with pattern in the middle
    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                                   :%@@@@@@@@@@@@@@@@@@@@@+                                     \n", pattern_color);
    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                               *@@@@@@@@@@@@@@@@@@@@@@@@@@:                                    \n", pattern_color);
    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                            +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=                                  \n", pattern_color);
    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                         .#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@# #@@@@%#*-                       \n", pattern_color);
    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                       -%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%-   :@@@@@+-*                      \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                   .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#  .@@@* ++                      \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s               .#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=    =@+ =-                       \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s             -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%      : +                         \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s            :%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*      -@                          \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s          #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+    -%@=                          \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s        .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%: .%@%*%.                          \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s       #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%#-                                \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s      :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%####***==-.                                    \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s       =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*.                                                 \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s        :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-:=#@@%=.            .=#-#@@@@+                       \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                .::--    +@@@@@@@@@@@@@@@@@@- .-+##%*   -@*.:-  +@@@@@@@=                    \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                         @@@@@@@@@@@@@@@@@@*-*#**=  @+  :@*  :. -@@@%=#%-                    \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                       =@@@@@@@@@@@@@@@: :#@@%+=. :@@-   -+:   .%@@%. #                     \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                      %@@@@@@@@@@@@@@@+          *@@@.         %@@@-                       \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                     -@@@@@@@@@@@@@@@@@#         +@@@@        :%@@@+                       \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                     #@@@@@@@@@@@@@@@@@@-        :@@%#        +@@@@+                       \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                   .%@@@@@@@@@@@@@@@@@@*        %%#@*.       #@@@@*                       \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                  =@@@@@@@@@@@@@@@@@@%.          :=: +=    .%@@@@#                       \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                   +@@@@@@@@@@@@@@@@@@@=         #@@@: %@*. +@@@@@@-                      \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                   #@@@@@@@@@@@@@@@@@@@@: * .#@@@%.  :=@:+@#@@@@@@@%                      \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                   #@@@@@@@@@@@@@@@@@@@@@@@@@@%-+%@:      %@@@@@@@@@=                     \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                   *@@@@@@@@@@@@@@@@@@@@@@@@%#:     .*-   +@@@@@@@@@@                     \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                    *@@@@@@@@@@@@@@@@@@@@@@@@#      =%@#   @@@%@@@@@@@-                    \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                    #@@@@@@@@@@@@@@@@@@@@@@@@@@:      @*  #@@#  =@@@@@*                    \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                  :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+:=@@@@@@@@@* :@@@@@@                    \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                 @@@@@@@@@@@@@@@@@@@@- #@@@@@@@@@@@@@@@@@@@@@:@@@@@@@                    \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                -@@@@@@@@@@@@@@@@@@@@@%  %@@@@= -@@@@%@@@@@@@%-@@@@@@@-                   \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s               *@@@@@@@@@@@@@@@@@@@@@@@#  #@@@+  :@@  :@@@@@@%+@@@@@@@+                   \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s             .%@@@@@@@@@@@@@@@@@@@@@@@@@@. -@@@@* :@   *@@@@%+ +@@@@@@+-:                 \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s            -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+ =@@@*  #:  *@@  +@# +@@@@@* *  :              \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s            =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@# =@@@%+#=  ::*+  ## %@@@@@* += -+             \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#.-@@-*++  :-     %-:@@@@@# :* :%             \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s          -@@@@@@@@#-%@@@@@@@@@@@@@@@@@@@@@@@@= *# .%: :.     = @@@@@@%: %+*@-            \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("          .@@@@@@@@=  @@@@@@@@@@@@@@@@@@@@@@@@@@+   =@.-:       @@@@@@@+ *@@@=            \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s            :=#%%#.  +-+@@@@@@@@@@@@@@@@@@@@@@@@@+  +*         .@@@@@@% -@@@:            \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                       *@@@@@@@@@@@@@@@@@@@@@@@@@*   .         :@@@@@@==@@#             \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                     :@@@@@@@@@@@@@@@@@@@@@@@@@@#             =@@@@@@@@%              \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                       .+%@@@@@@@@@@@@@@@@@@@@@@@@@+            #@@@@@@#               \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                           #@@@@@@@@@@@@@@@@@@@@@@@@@.          :@@@@@.                \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                            #@@@@@@@@@@@@@@@@@@@@@@@@+            **.                  \n", pattern_color);

    for (int i = 0; i < 3; i++)
        printf("%s        ", border_color);
    printf("%s                                           ......                \n", pattern_color);

    // Apply border color and print bottom border
    printf("%s", border_color);
    for (int i = 0; i < 80; i++)
        printf(" ");
    printf("\n");

    // Reset colors
    printf("\033[0m");
}

int main()
{
    // Define colors for border and pattern
    const char *colors[] = {
        "\033[1;31m", // Red
        "\033[1;32m", // Green
        "\033[1;33m", // Yellow
        "\033[1;34m", // Blue
        "\033[1;35m", // Purple
        "\033[1;36m", // Cyan
        "\033[1;37m", // White
    };

    int color_count = sizeof(colors) / sizeof(colors[0]);
    int invert_flag = 0;

    // Loop through colors infinitely
    while (1)
    {
        for (int i = 0; i < color_count; i++)
        {
            // Toggle between normal and inverted pattern colors
            const char *pattern_color = invert_flag ? "\033[1;40m\033[1;37m" : "\033[1;47m\033[1;30m"; // White text on black vs. black text on white
            invert_flag = !invert_flag;

            // Print pattern with changing border and inverted colors
            print_pattern(pattern_color, colors[i]);

            Sleep(500);    // Delay of 0.5 seconds
            system("cls"); // Clear the console screen for next frame
        }
    }

    return 0;
}
