// TyPadDoc.h : interface of the CTyPadDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TYPADDOC_H__D03A88A3_CA58_4030_88DA_249A79CA0221__INCLUDED_)
#define AFX_TYPADDOC_H__D03A88A3_CA58_4030_88DA_249A79CA0221__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTyPadDoc : public CDocument
{
protected: // create from serialization only
	CTyPadDoc();
	DECLARE_DYNCREATE(CTyPadDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTyPadDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTyPadDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTyPadDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TYPADDOC_H__D03A88A3_CA58_4030_88DA_249A79CA0221__INCLUDED_)
