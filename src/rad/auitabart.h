#ifndef __AUITABART_H__
#define __AUITABART_H__

#include <wx/aui/auibook.h>

class AuiTabArt : public wxAuiGenericTabArt {
public:
	wxSize GetTabSize(wxDC& dc, wxWindow* wnd, const wxString& caption, const wxBitmap& bitmap,
	                  bool active, int close_button_state, int* x_extent) override {
		return wxAuiGenericTabArt::GetTabSize(dc, wnd, caption, bitmap, active, close_button_state,
		                                      x_extent) +
		       wxSize(0, 2);
	}
};

#endif // __AUITABART_H__
