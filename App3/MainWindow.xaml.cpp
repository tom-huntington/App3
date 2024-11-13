#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::App3::implementation
{
    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
{
    auto handler = [&]()-> winrt::fire_and_forget
    {
#if 0
        co_await winrt::resume_after(std::chrono::seconds(1));
        // access this pointer
        auto action = DispatcherQueue(); // BOOM
#else
        co_await winrt::resume_background(); 
        auto action = DispatcherQueue(); // no error
#endif
    };
    handler();
}
}
