// TyPadView.h : interface of the CTyPadView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TYPADVIEW_H__669626C9_67B9_4A20_8B74_0A2F42F5F02D__INCLUDED_)
#define AFX_TYPADVIEW_H__669626C9_67B9_4A20_8B74_0A2F42F5F02D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTyPadView : public CEditView
{
protected: // create from serialization only
	CTyPadView();
	DECLARE_DYNCREATE(CTyPadView)

// Attributes
public:
	CTyPadDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTyPadView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTyPadView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTyPadView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TyPadView.cpp
inline CTyPadDoc* CTyPadView::GetDocument()
   { return (CTyPadDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TYPADVIEW_H__669626C9_67B9_4A20_8B74_0A2F42F5F02D__INCLUDED_)
