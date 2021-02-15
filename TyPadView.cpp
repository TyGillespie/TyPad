// TyPadView.cpp : implementation of the CTyPadView class
//

#include "stdafx.h"
#include "TyPad.h"

#include "TyPadDoc.h"
#include "TyPadView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTyPadView

IMPLEMENT_DYNCREATE(CTyPadView, CEditView)

BEGIN_MESSAGE_MAP(CTyPadView, CEditView)
	//{{AFX_MSG_MAP(CTyPadView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CEditView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CEditView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTyPadView construction/destruction

CTyPadView::CTyPadView()
{
	// TODO: add construction code here

}

CTyPadView::~CTyPadView()
{
}

BOOL CTyPadView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	BOOL bPreCreated = CEditView::PreCreateWindow(cs);
	cs.style &= ~(ES_AUTOHSCROLL|WS_HSCROLL);	// Enable word-wrapping

	return bPreCreated;
}

/////////////////////////////////////////////////////////////////////////////
// CTyPadView drawing

void CTyPadView::OnDraw(CDC* pDC)
{
	CTyPadDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTyPadView printing

BOOL CTyPadView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default CEditView preparation
	return CEditView::OnPreparePrinting(pInfo);
}

void CTyPadView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView begin printing.
	CEditView::OnBeginPrinting(pDC, pInfo);
}

void CTyPadView::OnEndPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// Default CEditView end printing
	CEditView::OnEndPrinting(pDC, pInfo);
}

/////////////////////////////////////////////////////////////////////////////
// CTyPadView diagnostics

#ifdef _DEBUG
void CTyPadView::AssertValid() const
{
	CEditView::AssertValid();
}

void CTyPadView::Dump(CDumpContext& dc) const
{
	CEditView::Dump(dc);
}

CTyPadDoc* CTyPadView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTyPadDoc)));
	return (CTyPadDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTyPadView message handlers
