#include "swapping_policy_managers.hpp"



Page::Page() {
    pageIndex = -1;
}

Page::Page(int index) {
    pageIndex = index;
}

int Page::GetPageIndex() {
    return pageIndex;
}

