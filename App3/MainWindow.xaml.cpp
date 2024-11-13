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
    winrt::Windows::Foundation::DateTime{ winrt::Windows::Foundation::TimeSpan{} };
    auto handler = [&, this_ = this]()-> winrt::fire_and_forget
    {
        assert(this_ == this);
        co_await winrt::resume_background(); 
        assert(this_ == this);
        auto action = DispatcherQueue(); // no error
#endif
    };
    handler();
}
}
