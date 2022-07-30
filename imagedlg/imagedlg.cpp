#include "imagedlg.h"
#include "framework.h"
#include <gdiplus.h>
#pragma commant(lib,"gd")



INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC HDC = BeginPaint(hDlg,  &ps);
        Graphics gp(hdc);
        Image img = ("img1.jpg");
        gp.DrawImage(&img, 0, 0, 300, 300);      
        EndPaint(hDlg, &ps);

    }
    
    return TRUE;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPTSTR    lpCmdLine,
    _In_ int       nCmdShow)
{

    ULONG_PTR up;
    Gdiplusstartupinput gpsi;
    Gdiplusestartup(&up, &gpsi, NULL);
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
    gd


}



// 정보 대화 상자의 메시지 처리기입니다.
