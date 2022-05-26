// Generated from d:\grimoire_lang\src\grimoire.g4 by ANTLR 4.10.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class grimoireParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.10.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		WHITESPACE=1, NEWLINE=2, COMMENT=3, MAIN=4, ARRAY=5, BREAK=6, DO=7, IF=8, 
		ELSE=9, FOR=10, FUNC=11, LET=12, IN=13, OF=14, THEN=15, TO=16, VAR=17, 
		WHILE=18, ENDIF=19, BEGIN=20, END=21, ENDDO=22, RET=23, INT=24, FLOAT=25, 
		ID=26, INTLIT=27, FLOATLIT=28, COMMA=29, COLON=30, SEMICOLON=31, OPENBRACKET=32, 
		CLOSEBRACKET=33, OPENSQBRACKET=34, CLOSESQBRACKET=35, ADD=36, SUB=37, 
		MULT=38, DIV=39, EQUAL=40, NOTEQUAL=41, LESS=42, GREAT=43, LESSEQUAL=44, 
		GREATEQUAL=45, AND=46, OR=47, ASSIGNMENT=48;
	public static final int
		RULE_grimoire = 0, RULE_declarationsegment = 1, RULE_vardeclarationlist = 2, 
		RULE_vardeclaration = 3, RULE_functdeclarationlist = 4, RULE_functdeclaration = 5, 
		RULE_type = 6, RULE_optionalinit = 7, RULE_paramlist = 8, RULE_paramlisttail = 9, 
		RULE_rettype = 10, RULE_param = 11, RULE_statseq = 12, RULE_stattail = 13, 
		RULE_stat = 14, RULE_idstat = 15, RULE_idstat2 = 16, RULE_condstat = 17, 
		RULE_condstattail = 18, RULE_expr = 19, RULE_logicoperation1 = 20, RULE_logicoperationtail1 = 21, 
		RULE_logicoperation2 = 22, RULE_logicoperationtail2 = 23, RULE_compoperation1 = 24, 
		RULE_compoperationtail1 = 25, RULE_compoperation2 = 26, RULE_compoperationtail2 = 27, 
		RULE_compoperation3 = 28, RULE_compoperationtail3 = 29, RULE_compoperation4 = 30, 
		RULE_compoperationtail4 = 31, RULE_compoperation5 = 32, RULE_compoperationtail5 = 33, 
		RULE_compoperation6 = 34, RULE_compoperationtail6 = 35, RULE_sumoperation1 = 36, 
		RULE_sumoperationtail1 = 37, RULE_sumoperation2 = 38, RULE_sumoperationtail2 = 39, 
		RULE_multoperation1 = 40, RULE_multoperationtail1 = 41, RULE_multoperation2 = 42, 
		RULE_multoperationtail2 = 43, RULE_term = 44, RULE_exprlist = 45, RULE_exprlisttail = 46, 
		RULE_lvaluetail = 47, RULE_assignstat = 48;
	private static String[] makeRuleNames() {
		return new String[] {
			"grimoire", "declarationsegment", "vardeclarationlist", "vardeclaration", 
			"functdeclarationlist", "functdeclaration", "type", "optionalinit", "paramlist", 
			"paramlisttail", "rettype", "param", "statseq", "stattail", "stat", "idstat", 
			"idstat2", "condstat", "condstattail", "expr", "logicoperation1", "logicoperationtail1", 
			"logicoperation2", "logicoperationtail2", "compoperation1", "compoperationtail1", 
			"compoperation2", "compoperationtail2", "compoperation3", "compoperationtail3", 
			"compoperation4", "compoperationtail4", "compoperation5", "compoperationtail5", 
			"compoperation6", "compoperationtail6", "sumoperation1", "sumoperationtail1", 
			"sumoperation2", "sumoperationtail2", "multoperation1", "multoperationtail1", 
			"multoperation2", "multoperationtail2", "term", "exprlist", "exprlisttail", 
			"lvaluetail", "assignstat"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, "'main'", "'array'", "'break'", "'do'", "'if'", 
			"'else'", "'for'", "'function'", "'let'", "'in'", "'of'", "'then'", "'to'", 
			"'var'", "'while'", "'endif'", "'begin'", "'end'", "'enddo'", "'return'", 
			"'int'", "'float'", null, null, null, "','", "':'", "';'", "'('", "')'", 
			"'['", "']'", "'+'", "'-'", "'*'", "'/'", "'='", "'<>'", "'<'", "'>'", 
			"'<='", "'>='", "'&'", "'|'", "':='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "WHITESPACE", "NEWLINE", "COMMENT", "MAIN", "ARRAY", "BREAK", "DO", 
			"IF", "ELSE", "FOR", "FUNC", "LET", "IN", "OF", "THEN", "TO", "VAR", 
			"WHILE", "ENDIF", "BEGIN", "END", "ENDDO", "RET", "INT", "FLOAT", "ID", 
			"INTLIT", "FLOATLIT", "COMMA", "COLON", "SEMICOLON", "OPENBRACKET", "CLOSEBRACKET", 
			"OPENSQBRACKET", "CLOSESQBRACKET", "ADD", "SUB", "MULT", "DIV", "EQUAL", 
			"NOTEQUAL", "LESS", "GREAT", "LESSEQUAL", "GREATEQUAL", "AND", "OR", 
			"ASSIGNMENT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "grimoire.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public grimoireParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class GrimoireContext extends ParserRuleContext {
		public TerminalNode MAIN() { return getToken(grimoireParser.MAIN, 0); }
		public TerminalNode LET() { return getToken(grimoireParser.LET, 0); }
		public DeclarationsegmentContext declarationsegment() {
			return getRuleContext(DeclarationsegmentContext.class,0);
		}
		public TerminalNode IN() { return getToken(grimoireParser.IN, 0); }
		public TerminalNode BEGIN() { return getToken(grimoireParser.BEGIN, 0); }
		public StatseqContext statseq() {
			return getRuleContext(StatseqContext.class,0);
		}
		public TerminalNode END() { return getToken(grimoireParser.END, 0); }
		public GrimoireContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_grimoire; }
	}

	public final GrimoireContext grimoire() throws RecognitionException {
		GrimoireContext _localctx = new GrimoireContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_grimoire);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(98);
			match(MAIN);
			setState(99);
			match(LET);
			setState(100);
			declarationsegment();
			setState(101);
			match(IN);
			setState(102);
			match(BEGIN);
			setState(103);
			statseq();
			setState(104);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationsegmentContext extends ParserRuleContext {
		public VardeclarationlistContext vardeclarationlist() {
			return getRuleContext(VardeclarationlistContext.class,0);
		}
		public FunctdeclarationlistContext functdeclarationlist() {
			return getRuleContext(FunctdeclarationlistContext.class,0);
		}
		public DeclarationsegmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationsegment; }
	}

	public final DeclarationsegmentContext declarationsegment() throws RecognitionException {
		DeclarationsegmentContext _localctx = new DeclarationsegmentContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_declarationsegment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(106);
			vardeclarationlist();
			setState(107);
			functdeclarationlist();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VardeclarationlistContext extends ParserRuleContext {
		public VardeclarationContext vardeclaration() {
			return getRuleContext(VardeclarationContext.class,0);
		}
		public VardeclarationlistContext vardeclarationlist() {
			return getRuleContext(VardeclarationlistContext.class,0);
		}
		public VardeclarationlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vardeclarationlist; }
	}

	public final VardeclarationlistContext vardeclarationlist() throws RecognitionException {
		VardeclarationlistContext _localctx = new VardeclarationlistContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_vardeclarationlist);
		try {
			setState(113);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case FUNC:
			case IN:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case VAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(110);
				vardeclaration();
				setState(111);
				vardeclarationlist();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VardeclarationContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(grimoireParser.VAR, 0); }
		public TerminalNode ID() { return getToken(grimoireParser.ID, 0); }
		public TerminalNode COLON() { return getToken(grimoireParser.COLON, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public OptionalinitContext optionalinit() {
			return getRuleContext(OptionalinitContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(grimoireParser.SEMICOLON, 0); }
		public VardeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vardeclaration; }
	}

	public final VardeclarationContext vardeclaration() throws RecognitionException {
		VardeclarationContext _localctx = new VardeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_vardeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			match(VAR);
			setState(116);
			match(ID);
			setState(117);
			match(COLON);
			setState(118);
			type();
			setState(119);
			optionalinit();
			setState(120);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctdeclarationlistContext extends ParserRuleContext {
		public FunctdeclarationContext functdeclaration() {
			return getRuleContext(FunctdeclarationContext.class,0);
		}
		public FunctdeclarationlistContext functdeclarationlist() {
			return getRuleContext(FunctdeclarationlistContext.class,0);
		}
		public FunctdeclarationlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functdeclarationlist; }
	}

	public final FunctdeclarationlistContext functdeclarationlist() throws RecognitionException {
		FunctdeclarationlistContext _localctx = new FunctdeclarationlistContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_functdeclarationlist);
		try {
			setState(126);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IN:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case FUNC:
				enterOuterAlt(_localctx, 2);
				{
				setState(123);
				functdeclaration();
				setState(124);
				functdeclarationlist();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctdeclarationContext extends ParserRuleContext {
		public TerminalNode FUNC() { return getToken(grimoireParser.FUNC, 0); }
		public TerminalNode ID() { return getToken(grimoireParser.ID, 0); }
		public TerminalNode OPENBRACKET() { return getToken(grimoireParser.OPENBRACKET, 0); }
		public ParamlistContext paramlist() {
			return getRuleContext(ParamlistContext.class,0);
		}
		public TerminalNode CLOSEBRACKET() { return getToken(grimoireParser.CLOSEBRACKET, 0); }
		public RettypeContext rettype() {
			return getRuleContext(RettypeContext.class,0);
		}
		public TerminalNode BEGIN() { return getToken(grimoireParser.BEGIN, 0); }
		public StatseqContext statseq() {
			return getRuleContext(StatseqContext.class,0);
		}
		public TerminalNode END() { return getToken(grimoireParser.END, 0); }
		public FunctdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functdeclaration; }
	}

	public final FunctdeclarationContext functdeclaration() throws RecognitionException {
		FunctdeclarationContext _localctx = new FunctdeclarationContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_functdeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			match(FUNC);
			setState(129);
			match(ID);
			setState(130);
			match(OPENBRACKET);
			setState(131);
			paramlist();
			setState(132);
			match(CLOSEBRACKET);
			setState(133);
			rettype();
			setState(134);
			match(BEGIN);
			setState(135);
			statseq();
			setState(136);
			match(END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(grimoireParser.INT, 0); }
		public TerminalNode ARRAY() { return getToken(grimoireParser.ARRAY, 0); }
		public TerminalNode OPENSQBRACKET() { return getToken(grimoireParser.OPENSQBRACKET, 0); }
		public TerminalNode INTLIT() { return getToken(grimoireParser.INTLIT, 0); }
		public TerminalNode CLOSESQBRACKET() { return getToken(grimoireParser.CLOSESQBRACKET, 0); }
		public TerminalNode OF() { return getToken(grimoireParser.OF, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_type);
		try {
			setState(145);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(138);
				match(INT);
				}
				break;
			case ARRAY:
				enterOuterAlt(_localctx, 2);
				{
				setState(139);
				match(ARRAY);
				setState(140);
				match(OPENSQBRACKET);
				setState(141);
				match(INTLIT);
				setState(142);
				match(CLOSESQBRACKET);
				setState(143);
				match(OF);
				setState(144);
				match(INT);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OptionalinitContext extends ParserRuleContext {
		public TerminalNode ASSIGNMENT() { return getToken(grimoireParser.ASSIGNMENT, 0); }
		public TerminalNode INTLIT() { return getToken(grimoireParser.INTLIT, 0); }
		public OptionalinitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optionalinit; }
	}

	public final OptionalinitContext optionalinit() throws RecognitionException {
		OptionalinitContext _localctx = new OptionalinitContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_optionalinit);
		try {
			setState(150);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SEMICOLON:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case ASSIGNMENT:
				enterOuterAlt(_localctx, 2);
				{
				setState(148);
				match(ASSIGNMENT);
				setState(149);
				match(INTLIT);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamlistContext extends ParserRuleContext {
		public ParamContext param() {
			return getRuleContext(ParamContext.class,0);
		}
		public ParamlisttailContext paramlisttail() {
			return getRuleContext(ParamlisttailContext.class,0);
		}
		public ParamlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramlist; }
	}

	public final ParamlistContext paramlist() throws RecognitionException {
		ParamlistContext _localctx = new ParamlistContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_paramlist);
		try {
			setState(156);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLOSEBRACKET:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(153);
				param();
				setState(154);
				paramlisttail();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamlisttailContext extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(grimoireParser.COMMA, 0); }
		public ParamContext param() {
			return getRuleContext(ParamContext.class,0);
		}
		public ParamlisttailContext paramlisttail() {
			return getRuleContext(ParamlisttailContext.class,0);
		}
		public ParamlisttailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramlisttail; }
	}

	public final ParamlisttailContext paramlisttail() throws RecognitionException {
		ParamlisttailContext _localctx = new ParamlisttailContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_paramlisttail);
		try {
			setState(163);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLOSEBRACKET:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case COMMA:
				enterOuterAlt(_localctx, 2);
				{
				setState(159);
				match(COMMA);
				setState(160);
				param();
				setState(161);
				paramlisttail();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RettypeContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(grimoireParser.COLON, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public RettypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rettype; }
	}

	public final RettypeContext rettype() throws RecognitionException {
		RettypeContext _localctx = new RettypeContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_rettype);
		try {
			setState(168);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BEGIN:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case COLON:
				enterOuterAlt(_localctx, 2);
				{
				setState(166);
				match(COLON);
				setState(167);
				type();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(grimoireParser.ID, 0); }
		public TerminalNode COLON() { return getToken(grimoireParser.COLON, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ParamContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param; }
	}

	public final ParamContext param() throws RecognitionException {
		ParamContext _localctx = new ParamContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_param);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(170);
			match(ID);
			setState(171);
			match(COLON);
			setState(172);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatseqContext extends ParserRuleContext {
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public StattailContext stattail() {
			return getRuleContext(StattailContext.class,0);
		}
		public StatseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statseq; }
	}

	public final StatseqContext statseq() throws RecognitionException {
		StatseqContext _localctx = new StatseqContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_statseq);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(174);
			stat();
			setState(175);
			stattail();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StattailContext extends ParserRuleContext {
		public StatseqContext statseq() {
			return getRuleContext(StatseqContext.class,0);
		}
		public StattailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stattail; }
	}

	public final StattailContext stattail() throws RecognitionException {
		StattailContext _localctx = new StattailContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_stattail);
		try {
			setState(179);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ELSE:
			case ENDIF:
			case END:
			case ENDDO:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case BREAK:
			case IF:
			case FOR:
			case LET:
			case WHILE:
			case RET:
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(178);
				statseq();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(grimoireParser.ID, 0); }
		public IdstatContext idstat() {
			return getRuleContext(IdstatContext.class,0);
		}
		public CondstatContext condstat() {
			return getRuleContext(CondstatContext.class,0);
		}
		public TerminalNode WHILE() { return getToken(grimoireParser.WHILE, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode DO() { return getToken(grimoireParser.DO, 0); }
		public StatseqContext statseq() {
			return getRuleContext(StatseqContext.class,0);
		}
		public TerminalNode ENDDO() { return getToken(grimoireParser.ENDDO, 0); }
		public TerminalNode SEMICOLON() { return getToken(grimoireParser.SEMICOLON, 0); }
		public TerminalNode FOR() { return getToken(grimoireParser.FOR, 0); }
		public TerminalNode ASSIGNMENT() { return getToken(grimoireParser.ASSIGNMENT, 0); }
		public TerminalNode TO() { return getToken(grimoireParser.TO, 0); }
		public TerminalNode BREAK() { return getToken(grimoireParser.BREAK, 0); }
		public TerminalNode RET() { return getToken(grimoireParser.RET, 0); }
		public TerminalNode LET() { return getToken(grimoireParser.LET, 0); }
		public DeclarationsegmentContext declarationsegment() {
			return getRuleContext(DeclarationsegmentContext.class,0);
		}
		public TerminalNode IN() { return getToken(grimoireParser.IN, 0); }
		public TerminalNode END() { return getToken(grimoireParser.END, 0); }
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_stat);
		try {
			setState(214);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(181);
				match(ID);
				setState(182);
				idstat();
				}
				break;
			case IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(183);
				condstat();
				}
				break;
			case WHILE:
				enterOuterAlt(_localctx, 3);
				{
				setState(184);
				match(WHILE);
				setState(185);
				expr();
				setState(186);
				match(DO);
				setState(187);
				statseq();
				setState(188);
				match(ENDDO);
				setState(189);
				match(SEMICOLON);
				}
				break;
			case FOR:
				enterOuterAlt(_localctx, 4);
				{
				setState(191);
				match(FOR);
				setState(192);
				match(ID);
				setState(193);
				match(ASSIGNMENT);
				setState(194);
				expr();
				setState(195);
				match(TO);
				setState(196);
				expr();
				setState(197);
				match(DO);
				setState(198);
				statseq();
				setState(199);
				match(ENDDO);
				setState(200);
				match(SEMICOLON);
				}
				break;
			case BREAK:
				enterOuterAlt(_localctx, 5);
				{
				setState(202);
				match(BREAK);
				setState(203);
				match(SEMICOLON);
				}
				break;
			case RET:
				enterOuterAlt(_localctx, 6);
				{
				setState(204);
				match(RET);
				setState(205);
				expr();
				setState(206);
				match(SEMICOLON);
				}
				break;
			case LET:
				enterOuterAlt(_localctx, 7);
				{
				setState(208);
				match(LET);
				setState(209);
				declarationsegment();
				setState(210);
				match(IN);
				setState(211);
				statseq();
				setState(212);
				match(END);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdstatContext extends ParserRuleContext {
		public AssignstatContext assignstat() {
			return getRuleContext(AssignstatContext.class,0);
		}
		public TerminalNode ASSIGNMENT() { return getToken(grimoireParser.ASSIGNMENT, 0); }
		public Idstat2Context idstat2() {
			return getRuleContext(Idstat2Context.class,0);
		}
		public TerminalNode OPENBRACKET() { return getToken(grimoireParser.OPENBRACKET, 0); }
		public ExprlistContext exprlist() {
			return getRuleContext(ExprlistContext.class,0);
		}
		public TerminalNode CLOSEBRACKET() { return getToken(grimoireParser.CLOSEBRACKET, 0); }
		public TerminalNode SEMICOLON() { return getToken(grimoireParser.SEMICOLON, 0); }
		public IdstatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_idstat; }
	}

	public final IdstatContext idstat() throws RecognitionException {
		IdstatContext _localctx = new IdstatContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_idstat);
		try {
			setState(225);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPENSQBRACKET:
			case ASSIGNMENT:
				enterOuterAlt(_localctx, 1);
				{
				setState(216);
				assignstat();
				setState(217);
				match(ASSIGNMENT);
				setState(218);
				idstat2();
				}
				break;
			case OPENBRACKET:
				enterOuterAlt(_localctx, 2);
				{
				setState(220);
				match(OPENBRACKET);
				setState(221);
				exprlist();
				setState(222);
				match(CLOSEBRACKET);
				setState(223);
				match(SEMICOLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Idstat2Context extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(grimoireParser.SEMICOLON, 0); }
		public Idstat2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_idstat2; }
	}

	public final Idstat2Context idstat2() throws RecognitionException {
		Idstat2Context _localctx = new Idstat2Context(_ctx, getState());
		enterRule(_localctx, 32, RULE_idstat2);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(227);
			expr();
			setState(228);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CondstatContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(grimoireParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode THEN() { return getToken(grimoireParser.THEN, 0); }
		public StatseqContext statseq() {
			return getRuleContext(StatseqContext.class,0);
		}
		public CondstattailContext condstattail() {
			return getRuleContext(CondstattailContext.class,0);
		}
		public CondstatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condstat; }
	}

	public final CondstatContext condstat() throws RecognitionException {
		CondstatContext _localctx = new CondstatContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_condstat);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(230);
			match(IF);
			setState(231);
			expr();
			setState(232);
			match(THEN);
			setState(233);
			statseq();
			setState(234);
			condstattail();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CondstattailContext extends ParserRuleContext {
		public TerminalNode ENDIF() { return getToken(grimoireParser.ENDIF, 0); }
		public TerminalNode SEMICOLON() { return getToken(grimoireParser.SEMICOLON, 0); }
		public TerminalNode ELSE() { return getToken(grimoireParser.ELSE, 0); }
		public StatseqContext statseq() {
			return getRuleContext(StatseqContext.class,0);
		}
		public CondstattailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condstattail; }
	}

	public final CondstattailContext condstattail() throws RecognitionException {
		CondstattailContext _localctx = new CondstattailContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_condstattail);
		try {
			setState(243);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ENDIF:
				enterOuterAlt(_localctx, 1);
				{
				setState(236);
				match(ENDIF);
				setState(237);
				match(SEMICOLON);
				}
				break;
			case ELSE:
				enterOuterAlt(_localctx, 2);
				{
				setState(238);
				match(ELSE);
				setState(239);
				statseq();
				setState(240);
				match(ENDIF);
				setState(241);
				match(SEMICOLON);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public Logicoperation1Context logicoperation1() {
			return getRuleContext(Logicoperation1Context.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_expr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(245);
			logicoperation1();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Logicoperation1Context extends ParserRuleContext {
		public Logicoperation2Context logicoperation2() {
			return getRuleContext(Logicoperation2Context.class,0);
		}
		public Logicoperationtail1Context logicoperationtail1() {
			return getRuleContext(Logicoperationtail1Context.class,0);
		}
		public Logicoperation1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicoperation1; }
	}

	public final Logicoperation1Context logicoperation1() throws RecognitionException {
		Logicoperation1Context _localctx = new Logicoperation1Context(_ctx, getState());
		enterRule(_localctx, 40, RULE_logicoperation1);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(247);
			logicoperation2();
			setState(248);
			logicoperationtail1();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Logicoperationtail1Context extends ParserRuleContext {
		public TerminalNode OR() { return getToken(grimoireParser.OR, 0); }
		public Logicoperation1Context logicoperation1() {
			return getRuleContext(Logicoperation1Context.class,0);
		}
		public Logicoperationtail1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicoperationtail1; }
	}

	public final Logicoperationtail1Context logicoperationtail1() throws RecognitionException {
		Logicoperationtail1Context _localctx = new Logicoperationtail1Context(_ctx, getState());
		enterRule(_localctx, 42, RULE_logicoperationtail1);
		try {
			setState(253);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OR:
				enterOuterAlt(_localctx, 1);
				{
				setState(250);
				match(OR);
				setState(251);
				logicoperation1();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Logicoperation2Context extends ParserRuleContext {
		public Compoperation1Context compoperation1() {
			return getRuleContext(Compoperation1Context.class,0);
		}
		public Logicoperationtail2Context logicoperationtail2() {
			return getRuleContext(Logicoperationtail2Context.class,0);
		}
		public Logicoperation2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicoperation2; }
	}

	public final Logicoperation2Context logicoperation2() throws RecognitionException {
		Logicoperation2Context _localctx = new Logicoperation2Context(_ctx, getState());
		enterRule(_localctx, 44, RULE_logicoperation2);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(255);
			compoperation1();
			setState(256);
			logicoperationtail2();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Logicoperationtail2Context extends ParserRuleContext {
		public TerminalNode AND() { return getToken(grimoireParser.AND, 0); }
		public Logicoperation2Context logicoperation2() {
			return getRuleContext(Logicoperation2Context.class,0);
		}
		public Logicoperationtail2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicoperationtail2; }
	}

	public final Logicoperationtail2Context logicoperationtail2() throws RecognitionException {
		Logicoperationtail2Context _localctx = new Logicoperationtail2Context(_ctx, getState());
		enterRule(_localctx, 46, RULE_logicoperationtail2);
		try {
			setState(261);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AND:
				enterOuterAlt(_localctx, 1);
				{
				setState(258);
				match(AND);
				setState(259);
				logicoperation2();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperation1Context extends ParserRuleContext {
		public Compoperation2Context compoperation2() {
			return getRuleContext(Compoperation2Context.class,0);
		}
		public Compoperationtail1Context compoperationtail1() {
			return getRuleContext(Compoperationtail1Context.class,0);
		}
		public Compoperation1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperation1; }
	}

	public final Compoperation1Context compoperation1() throws RecognitionException {
		Compoperation1Context _localctx = new Compoperation1Context(_ctx, getState());
		enterRule(_localctx, 48, RULE_compoperation1);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(263);
			compoperation2();
			setState(264);
			compoperationtail1();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperationtail1Context extends ParserRuleContext {
		public TerminalNode LESSEQUAL() { return getToken(grimoireParser.LESSEQUAL, 0); }
		public Compoperation1Context compoperation1() {
			return getRuleContext(Compoperation1Context.class,0);
		}
		public Compoperationtail1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperationtail1; }
	}

	public final Compoperationtail1Context compoperationtail1() throws RecognitionException {
		Compoperationtail1Context _localctx = new Compoperationtail1Context(_ctx, getState());
		enterRule(_localctx, 50, RULE_compoperationtail1);
		try {
			setState(269);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LESSEQUAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(266);
				match(LESSEQUAL);
				setState(267);
				compoperation1();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperation2Context extends ParserRuleContext {
		public Compoperation3Context compoperation3() {
			return getRuleContext(Compoperation3Context.class,0);
		}
		public Compoperationtail2Context compoperationtail2() {
			return getRuleContext(Compoperationtail2Context.class,0);
		}
		public Compoperation2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperation2; }
	}

	public final Compoperation2Context compoperation2() throws RecognitionException {
		Compoperation2Context _localctx = new Compoperation2Context(_ctx, getState());
		enterRule(_localctx, 52, RULE_compoperation2);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(271);
			compoperation3();
			setState(272);
			compoperationtail2();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperationtail2Context extends ParserRuleContext {
		public TerminalNode GREATEQUAL() { return getToken(grimoireParser.GREATEQUAL, 0); }
		public Compoperation2Context compoperation2() {
			return getRuleContext(Compoperation2Context.class,0);
		}
		public Compoperationtail2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperationtail2; }
	}

	public final Compoperationtail2Context compoperationtail2() throws RecognitionException {
		Compoperationtail2Context _localctx = new Compoperationtail2Context(_ctx, getState());
		enterRule(_localctx, 54, RULE_compoperationtail2);
		try {
			setState(277);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GREATEQUAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(274);
				match(GREATEQUAL);
				setState(275);
				compoperation2();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case LESSEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperation3Context extends ParserRuleContext {
		public Compoperation4Context compoperation4() {
			return getRuleContext(Compoperation4Context.class,0);
		}
		public Compoperationtail3Context compoperationtail3() {
			return getRuleContext(Compoperationtail3Context.class,0);
		}
		public Compoperation3Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperation3; }
	}

	public final Compoperation3Context compoperation3() throws RecognitionException {
		Compoperation3Context _localctx = new Compoperation3Context(_ctx, getState());
		enterRule(_localctx, 56, RULE_compoperation3);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(279);
			compoperation4();
			setState(280);
			compoperationtail3();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperationtail3Context extends ParserRuleContext {
		public TerminalNode LESS() { return getToken(grimoireParser.LESS, 0); }
		public Compoperation3Context compoperation3() {
			return getRuleContext(Compoperation3Context.class,0);
		}
		public Compoperationtail3Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperationtail3; }
	}

	public final Compoperationtail3Context compoperationtail3() throws RecognitionException {
		Compoperationtail3Context _localctx = new Compoperationtail3Context(_ctx, getState());
		enterRule(_localctx, 58, RULE_compoperationtail3);
		try {
			setState(285);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LESS:
				enterOuterAlt(_localctx, 1);
				{
				setState(282);
				match(LESS);
				setState(283);
				compoperation3();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperation4Context extends ParserRuleContext {
		public Compoperation5Context compoperation5() {
			return getRuleContext(Compoperation5Context.class,0);
		}
		public Compoperationtail4Context compoperationtail4() {
			return getRuleContext(Compoperationtail4Context.class,0);
		}
		public Compoperation4Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperation4; }
	}

	public final Compoperation4Context compoperation4() throws RecognitionException {
		Compoperation4Context _localctx = new Compoperation4Context(_ctx, getState());
		enterRule(_localctx, 60, RULE_compoperation4);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(287);
			compoperation5();
			setState(288);
			compoperationtail4();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperationtail4Context extends ParserRuleContext {
		public TerminalNode GREAT() { return getToken(grimoireParser.GREAT, 0); }
		public Compoperation4Context compoperation4() {
			return getRuleContext(Compoperation4Context.class,0);
		}
		public Compoperationtail4Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperationtail4; }
	}

	public final Compoperationtail4Context compoperationtail4() throws RecognitionException {
		Compoperationtail4Context _localctx = new Compoperationtail4Context(_ctx, getState());
		enterRule(_localctx, 62, RULE_compoperationtail4);
		try {
			setState(293);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GREAT:
				enterOuterAlt(_localctx, 1);
				{
				setState(290);
				match(GREAT);
				setState(291);
				compoperation4();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case LESS:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperation5Context extends ParserRuleContext {
		public Compoperation6Context compoperation6() {
			return getRuleContext(Compoperation6Context.class,0);
		}
		public Compoperationtail5Context compoperationtail5() {
			return getRuleContext(Compoperationtail5Context.class,0);
		}
		public Compoperation5Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperation5; }
	}

	public final Compoperation5Context compoperation5() throws RecognitionException {
		Compoperation5Context _localctx = new Compoperation5Context(_ctx, getState());
		enterRule(_localctx, 64, RULE_compoperation5);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(295);
			compoperation6();
			setState(296);
			compoperationtail5();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperationtail5Context extends ParserRuleContext {
		public TerminalNode NOTEQUAL() { return getToken(grimoireParser.NOTEQUAL, 0); }
		public Compoperation5Context compoperation5() {
			return getRuleContext(Compoperation5Context.class,0);
		}
		public Compoperationtail5Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperationtail5; }
	}

	public final Compoperationtail5Context compoperationtail5() throws RecognitionException {
		Compoperationtail5Context _localctx = new Compoperationtail5Context(_ctx, getState());
		enterRule(_localctx, 66, RULE_compoperationtail5);
		try {
			setState(301);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NOTEQUAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(298);
				match(NOTEQUAL);
				setState(299);
				compoperation5();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case LESS:
			case GREAT:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperation6Context extends ParserRuleContext {
		public Sumoperation1Context sumoperation1() {
			return getRuleContext(Sumoperation1Context.class,0);
		}
		public Compoperationtail6Context compoperationtail6() {
			return getRuleContext(Compoperationtail6Context.class,0);
		}
		public Compoperation6Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperation6; }
	}

	public final Compoperation6Context compoperation6() throws RecognitionException {
		Compoperation6Context _localctx = new Compoperation6Context(_ctx, getState());
		enterRule(_localctx, 68, RULE_compoperation6);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(303);
			sumoperation1();
			setState(304);
			compoperationtail6();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compoperationtail6Context extends ParserRuleContext {
		public TerminalNode EQUAL() { return getToken(grimoireParser.EQUAL, 0); }
		public Compoperation6Context compoperation6() {
			return getRuleContext(Compoperation6Context.class,0);
		}
		public Compoperationtail6Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoperationtail6; }
	}

	public final Compoperationtail6Context compoperationtail6() throws RecognitionException {
		Compoperationtail6Context _localctx = new Compoperationtail6Context(_ctx, getState());
		enterRule(_localctx, 70, RULE_compoperationtail6);
		try {
			setState(309);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case EQUAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(306);
				match(EQUAL);
				setState(307);
				compoperation6();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case NOTEQUAL:
			case LESS:
			case GREAT:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Sumoperation1Context extends ParserRuleContext {
		public Sumoperation2Context sumoperation2() {
			return getRuleContext(Sumoperation2Context.class,0);
		}
		public Sumoperationtail1Context sumoperationtail1() {
			return getRuleContext(Sumoperationtail1Context.class,0);
		}
		public Sumoperation1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sumoperation1; }
	}

	public final Sumoperation1Context sumoperation1() throws RecognitionException {
		Sumoperation1Context _localctx = new Sumoperation1Context(_ctx, getState());
		enterRule(_localctx, 72, RULE_sumoperation1);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(311);
			sumoperation2();
			setState(312);
			sumoperationtail1();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Sumoperationtail1Context extends ParserRuleContext {
		public TerminalNode SUB() { return getToken(grimoireParser.SUB, 0); }
		public Sumoperation1Context sumoperation1() {
			return getRuleContext(Sumoperation1Context.class,0);
		}
		public Sumoperationtail1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sumoperationtail1; }
	}

	public final Sumoperationtail1Context sumoperationtail1() throws RecognitionException {
		Sumoperationtail1Context _localctx = new Sumoperationtail1Context(_ctx, getState());
		enterRule(_localctx, 74, RULE_sumoperationtail1);
		try {
			setState(317);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SUB:
				enterOuterAlt(_localctx, 1);
				{
				setState(314);
				match(SUB);
				setState(315);
				sumoperation1();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case EQUAL:
			case NOTEQUAL:
			case LESS:
			case GREAT:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Sumoperation2Context extends ParserRuleContext {
		public Multoperation1Context multoperation1() {
			return getRuleContext(Multoperation1Context.class,0);
		}
		public Sumoperationtail2Context sumoperationtail2() {
			return getRuleContext(Sumoperationtail2Context.class,0);
		}
		public Sumoperation2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sumoperation2; }
	}

	public final Sumoperation2Context sumoperation2() throws RecognitionException {
		Sumoperation2Context _localctx = new Sumoperation2Context(_ctx, getState());
		enterRule(_localctx, 76, RULE_sumoperation2);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(319);
			multoperation1();
			setState(320);
			sumoperationtail2();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Sumoperationtail2Context extends ParserRuleContext {
		public TerminalNode ADD() { return getToken(grimoireParser.ADD, 0); }
		public Sumoperation2Context sumoperation2() {
			return getRuleContext(Sumoperation2Context.class,0);
		}
		public Sumoperationtail2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sumoperationtail2; }
	}

	public final Sumoperationtail2Context sumoperationtail2() throws RecognitionException {
		Sumoperationtail2Context _localctx = new Sumoperationtail2Context(_ctx, getState());
		enterRule(_localctx, 78, RULE_sumoperationtail2);
		try {
			setState(325);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ADD:
				enterOuterAlt(_localctx, 1);
				{
				setState(322);
				match(ADD);
				setState(323);
				sumoperation2();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case SUB:
			case EQUAL:
			case NOTEQUAL:
			case LESS:
			case GREAT:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Multoperation1Context extends ParserRuleContext {
		public Multoperation2Context multoperation2() {
			return getRuleContext(Multoperation2Context.class,0);
		}
		public Multoperationtail1Context multoperationtail1() {
			return getRuleContext(Multoperationtail1Context.class,0);
		}
		public Multoperation1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multoperation1; }
	}

	public final Multoperation1Context multoperation1() throws RecognitionException {
		Multoperation1Context _localctx = new Multoperation1Context(_ctx, getState());
		enterRule(_localctx, 80, RULE_multoperation1);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(327);
			multoperation2();
			setState(328);
			multoperationtail1();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Multoperationtail1Context extends ParserRuleContext {
		public TerminalNode DIV() { return getToken(grimoireParser.DIV, 0); }
		public Multoperation1Context multoperation1() {
			return getRuleContext(Multoperation1Context.class,0);
		}
		public Multoperationtail1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multoperationtail1; }
	}

	public final Multoperationtail1Context multoperationtail1() throws RecognitionException {
		Multoperationtail1Context _localctx = new Multoperationtail1Context(_ctx, getState());
		enterRule(_localctx, 82, RULE_multoperationtail1);
		try {
			setState(333);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DIV:
				enterOuterAlt(_localctx, 1);
				{
				setState(330);
				match(DIV);
				setState(331);
				multoperation1();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case ADD:
			case SUB:
			case EQUAL:
			case NOTEQUAL:
			case LESS:
			case GREAT:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Multoperation2Context extends ParserRuleContext {
		public TermContext term() {
			return getRuleContext(TermContext.class,0);
		}
		public Multoperationtail2Context multoperationtail2() {
			return getRuleContext(Multoperationtail2Context.class,0);
		}
		public Multoperation2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multoperation2; }
	}

	public final Multoperation2Context multoperation2() throws RecognitionException {
		Multoperation2Context _localctx = new Multoperation2Context(_ctx, getState());
		enterRule(_localctx, 84, RULE_multoperation2);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(335);
			term();
			setState(336);
			multoperationtail2();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Multoperationtail2Context extends ParserRuleContext {
		public TerminalNode MULT() { return getToken(grimoireParser.MULT, 0); }
		public Multoperation2Context multoperation2() {
			return getRuleContext(Multoperation2Context.class,0);
		}
		public Multoperationtail2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multoperationtail2; }
	}

	public final Multoperationtail2Context multoperationtail2() throws RecognitionException {
		Multoperationtail2Context _localctx = new Multoperationtail2Context(_ctx, getState());
		enterRule(_localctx, 86, RULE_multoperationtail2);
		try {
			setState(341);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case MULT:
				enterOuterAlt(_localctx, 1);
				{
				setState(338);
				match(MULT);
				setState(339);
				multoperation2();
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case ADD:
			case SUB:
			case DIV:
			case EQUAL:
			case NOTEQUAL:
			case LESS:
			case GREAT:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TermContext extends ParserRuleContext {
		public TerminalNode INTLIT() { return getToken(grimoireParser.INTLIT, 0); }
		public TerminalNode ID() { return getToken(grimoireParser.ID, 0); }
		public LvaluetailContext lvaluetail() {
			return getRuleContext(LvaluetailContext.class,0);
		}
		public TerminalNode OPENBRACKET() { return getToken(grimoireParser.OPENBRACKET, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode CLOSEBRACKET() { return getToken(grimoireParser.CLOSEBRACKET, 0); }
		public TermContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_term; }
	}

	public final TermContext term() throws RecognitionException {
		TermContext _localctx = new TermContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_term);
		try {
			setState(350);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INTLIT:
				enterOuterAlt(_localctx, 1);
				{
				setState(343);
				match(INTLIT);
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(344);
				match(ID);
				setState(345);
				lvaluetail();
				}
				break;
			case OPENBRACKET:
				enterOuterAlt(_localctx, 3);
				{
				setState(346);
				match(OPENBRACKET);
				setState(347);
				expr();
				setState(348);
				match(CLOSEBRACKET);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprlistContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ExprlisttailContext exprlisttail() {
			return getRuleContext(ExprlisttailContext.class,0);
		}
		public ExprlistContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exprlist; }
	}

	public final ExprlistContext exprlist() throws RecognitionException {
		ExprlistContext _localctx = new ExprlistContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_exprlist);
		try {
			setState(356);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CLOSEBRACKET:
				enterOuterAlt(_localctx, 1);
				{
				}
				break;
			case ID:
			case INTLIT:
			case OPENBRACKET:
				enterOuterAlt(_localctx, 2);
				{
				setState(353);
				expr();
				setState(354);
				exprlisttail();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprlisttailContext extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(grimoireParser.COMMA, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ExprlisttailContext exprlisttail() {
			return getRuleContext(ExprlisttailContext.class,0);
		}
		public ExprlisttailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exprlisttail; }
	}

	public final ExprlisttailContext exprlisttail() throws RecognitionException {
		ExprlisttailContext _localctx = new ExprlisttailContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_exprlisttail);
		try {
			setState(363);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMMA:
				enterOuterAlt(_localctx, 1);
				{
				setState(358);
				match(COMMA);
				setState(359);
				expr();
				setState(360);
				exprlisttail();
				}
				break;
			case CLOSEBRACKET:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LvaluetailContext extends ParserRuleContext {
		public TerminalNode OPENSQBRACKET() { return getToken(grimoireParser.OPENSQBRACKET, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode CLOSESQBRACKET() { return getToken(grimoireParser.CLOSESQBRACKET, 0); }
		public TerminalNode OPENBRACKET() { return getToken(grimoireParser.OPENBRACKET, 0); }
		public ExprlistContext exprlist() {
			return getRuleContext(ExprlistContext.class,0);
		}
		public TerminalNode CLOSEBRACKET() { return getToken(grimoireParser.CLOSEBRACKET, 0); }
		public LvaluetailContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lvaluetail; }
	}

	public final LvaluetailContext lvaluetail() throws RecognitionException {
		LvaluetailContext _localctx = new LvaluetailContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_lvaluetail);
		try {
			setState(374);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPENSQBRACKET:
				enterOuterAlt(_localctx, 1);
				{
				setState(365);
				match(OPENSQBRACKET);
				setState(366);
				expr();
				setState(367);
				match(CLOSESQBRACKET);
				}
				break;
			case OPENBRACKET:
				enterOuterAlt(_localctx, 2);
				{
				setState(369);
				match(OPENBRACKET);
				setState(370);
				exprlist();
				setState(371);
				match(CLOSEBRACKET);
				}
				break;
			case DO:
			case THEN:
			case TO:
			case COMMA:
			case SEMICOLON:
			case CLOSEBRACKET:
			case CLOSESQBRACKET:
			case ADD:
			case SUB:
			case MULT:
			case DIV:
			case EQUAL:
			case NOTEQUAL:
			case LESS:
			case GREAT:
			case LESSEQUAL:
			case GREATEQUAL:
			case AND:
			case OR:
				enterOuterAlt(_localctx, 3);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignstatContext extends ParserRuleContext {
		public TerminalNode OPENSQBRACKET() { return getToken(grimoireParser.OPENSQBRACKET, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode CLOSESQBRACKET() { return getToken(grimoireParser.CLOSESQBRACKET, 0); }
		public AssignstatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignstat; }
	}

	public final AssignstatContext assignstat() throws RecognitionException {
		AssignstatContext _localctx = new AssignstatContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_assignstat);
		try {
			setState(381);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPENSQBRACKET:
				enterOuterAlt(_localctx, 1);
				{
				setState(376);
				match(OPENSQBRACKET);
				setState(377);
				expr();
				setState(378);
				match(CLOSESQBRACKET);
				}
				break;
			case ASSIGNMENT:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u00010\u0180\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007\u001e"+
		"\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007!\u0002\"\u0007\"\u0002"+
		"#\u0007#\u0002$\u0007$\u0002%\u0007%\u0002&\u0007&\u0002\'\u0007\'\u0002"+
		"(\u0007(\u0002)\u0007)\u0002*\u0007*\u0002+\u0007+\u0002,\u0007,\u0002"+
		"-\u0007-\u0002.\u0007.\u0002/\u0007/\u00020\u00070\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0003\u0002r\b\u0002\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0003\u0004\u007f\b\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006\u0092\b\u0006\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0003\u0007\u0097\b\u0007\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0003\b\u009d\b\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0003"+
		"\t\u00a4\b\t\u0001\n\u0001\n\u0001\n\u0003\n\u00a9\b\n\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r"+
		"\u0003\r\u00b4\b\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e\u00d7"+
		"\b\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0003\u000f\u00e2\b\u000f\u0001"+
		"\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012\u00f4\b\u0012\u0001"+
		"\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0003\u0015\u00fe\b\u0015\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0003\u0017\u0106\b\u0017\u0001"+
		"\u0018\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001\u0019\u0003"+
		"\u0019\u010e\b\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001b\u0001"+
		"\u001b\u0001\u001b\u0003\u001b\u0116\b\u001b\u0001\u001c\u0001\u001c\u0001"+
		"\u001c\u0001\u001d\u0001\u001d\u0001\u001d\u0003\u001d\u011e\b\u001d\u0001"+
		"\u001e\u0001\u001e\u0001\u001e\u0001\u001f\u0001\u001f\u0001\u001f\u0003"+
		"\u001f\u0126\b\u001f\u0001 \u0001 \u0001 \u0001!\u0001!\u0001!\u0003!"+
		"\u012e\b!\u0001\"\u0001\"\u0001\"\u0001#\u0001#\u0001#\u0003#\u0136\b"+
		"#\u0001$\u0001$\u0001$\u0001%\u0001%\u0001%\u0003%\u013e\b%\u0001&\u0001"+
		"&\u0001&\u0001\'\u0001\'\u0001\'\u0003\'\u0146\b\'\u0001(\u0001(\u0001"+
		"(\u0001)\u0001)\u0001)\u0003)\u014e\b)\u0001*\u0001*\u0001*\u0001+\u0001"+
		"+\u0001+\u0003+\u0156\b+\u0001,\u0001,\u0001,\u0001,\u0001,\u0001,\u0001"+
		",\u0003,\u015f\b,\u0001-\u0001-\u0001-\u0001-\u0003-\u0165\b-\u0001.\u0001"+
		".\u0001.\u0001.\u0001.\u0003.\u016c\b.\u0001/\u0001/\u0001/\u0001/\u0001"+
		"/\u0001/\u0001/\u0001/\u0001/\u0003/\u0177\b/\u00010\u00010\u00010\u0001"+
		"0\u00010\u00030\u017e\b0\u00010\u0000\u00001\u0000\u0002\u0004\u0006\b"+
		"\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,.02"+
		"468:<>@BDFHJLNPRTVXZ\\^`\u0000\u0000\u0171\u0000b\u0001\u0000\u0000\u0000"+
		"\u0002j\u0001\u0000\u0000\u0000\u0004q\u0001\u0000\u0000\u0000\u0006s"+
		"\u0001\u0000\u0000\u0000\b~\u0001\u0000\u0000\u0000\n\u0080\u0001\u0000"+
		"\u0000\u0000\f\u0091\u0001\u0000\u0000\u0000\u000e\u0096\u0001\u0000\u0000"+
		"\u0000\u0010\u009c\u0001\u0000\u0000\u0000\u0012\u00a3\u0001\u0000\u0000"+
		"\u0000\u0014\u00a8\u0001\u0000\u0000\u0000\u0016\u00aa\u0001\u0000\u0000"+
		"\u0000\u0018\u00ae\u0001\u0000\u0000\u0000\u001a\u00b3\u0001\u0000\u0000"+
		"\u0000\u001c\u00d6\u0001\u0000\u0000\u0000\u001e\u00e1\u0001\u0000\u0000"+
		"\u0000 \u00e3\u0001\u0000\u0000\u0000\"\u00e6\u0001\u0000\u0000\u0000"+
		"$\u00f3\u0001\u0000\u0000\u0000&\u00f5\u0001\u0000\u0000\u0000(\u00f7"+
		"\u0001\u0000\u0000\u0000*\u00fd\u0001\u0000\u0000\u0000,\u00ff\u0001\u0000"+
		"\u0000\u0000.\u0105\u0001\u0000\u0000\u00000\u0107\u0001\u0000\u0000\u0000"+
		"2\u010d\u0001\u0000\u0000\u00004\u010f\u0001\u0000\u0000\u00006\u0115"+
		"\u0001\u0000\u0000\u00008\u0117\u0001\u0000\u0000\u0000:\u011d\u0001\u0000"+
		"\u0000\u0000<\u011f\u0001\u0000\u0000\u0000>\u0125\u0001\u0000\u0000\u0000"+
		"@\u0127\u0001\u0000\u0000\u0000B\u012d\u0001\u0000\u0000\u0000D\u012f"+
		"\u0001\u0000\u0000\u0000F\u0135\u0001\u0000\u0000\u0000H\u0137\u0001\u0000"+
		"\u0000\u0000J\u013d\u0001\u0000\u0000\u0000L\u013f\u0001\u0000\u0000\u0000"+
		"N\u0145\u0001\u0000\u0000\u0000P\u0147\u0001\u0000\u0000\u0000R\u014d"+
		"\u0001\u0000\u0000\u0000T\u014f\u0001\u0000\u0000\u0000V\u0155\u0001\u0000"+
		"\u0000\u0000X\u015e\u0001\u0000\u0000\u0000Z\u0164\u0001\u0000\u0000\u0000"+
		"\\\u016b\u0001\u0000\u0000\u0000^\u0176\u0001\u0000\u0000\u0000`\u017d"+
		"\u0001\u0000\u0000\u0000bc\u0005\u0004\u0000\u0000cd\u0005\f\u0000\u0000"+
		"de\u0003\u0002\u0001\u0000ef\u0005\r\u0000\u0000fg\u0005\u0014\u0000\u0000"+
		"gh\u0003\u0018\f\u0000hi\u0005\u0015\u0000\u0000i\u0001\u0001\u0000\u0000"+
		"\u0000jk\u0003\u0004\u0002\u0000kl\u0003\b\u0004\u0000l\u0003\u0001\u0000"+
		"\u0000\u0000mr\u0001\u0000\u0000\u0000no\u0003\u0006\u0003\u0000op\u0003"+
		"\u0004\u0002\u0000pr\u0001\u0000\u0000\u0000qm\u0001\u0000\u0000\u0000"+
		"qn\u0001\u0000\u0000\u0000r\u0005\u0001\u0000\u0000\u0000st\u0005\u0011"+
		"\u0000\u0000tu\u0005\u001a\u0000\u0000uv\u0005\u001e\u0000\u0000vw\u0003"+
		"\f\u0006\u0000wx\u0003\u000e\u0007\u0000xy\u0005\u001f\u0000\u0000y\u0007"+
		"\u0001\u0000\u0000\u0000z\u007f\u0001\u0000\u0000\u0000{|\u0003\n\u0005"+
		"\u0000|}\u0003\b\u0004\u0000}\u007f\u0001\u0000\u0000\u0000~z\u0001\u0000"+
		"\u0000\u0000~{\u0001\u0000\u0000\u0000\u007f\t\u0001\u0000\u0000\u0000"+
		"\u0080\u0081\u0005\u000b\u0000\u0000\u0081\u0082\u0005\u001a\u0000\u0000"+
		"\u0082\u0083\u0005 \u0000\u0000\u0083\u0084\u0003\u0010\b\u0000\u0084"+
		"\u0085\u0005!\u0000\u0000\u0085\u0086\u0003\u0014\n\u0000\u0086\u0087"+
		"\u0005\u0014\u0000\u0000\u0087\u0088\u0003\u0018\f\u0000\u0088\u0089\u0005"+
		"\u0015\u0000\u0000\u0089\u000b\u0001\u0000\u0000\u0000\u008a\u0092\u0005"+
		"\u0018\u0000\u0000\u008b\u008c\u0005\u0005\u0000\u0000\u008c\u008d\u0005"+
		"\"\u0000\u0000\u008d\u008e\u0005\u001b\u0000\u0000\u008e\u008f\u0005#"+
		"\u0000\u0000\u008f\u0090\u0005\u000e\u0000\u0000\u0090\u0092\u0005\u0018"+
		"\u0000\u0000\u0091\u008a\u0001\u0000\u0000\u0000\u0091\u008b\u0001\u0000"+
		"\u0000\u0000\u0092\r\u0001\u0000\u0000\u0000\u0093\u0097\u0001\u0000\u0000"+
		"\u0000\u0094\u0095\u00050\u0000\u0000\u0095\u0097\u0005\u001b\u0000\u0000"+
		"\u0096\u0093\u0001\u0000\u0000\u0000\u0096\u0094\u0001\u0000\u0000\u0000"+
		"\u0097\u000f\u0001\u0000\u0000\u0000\u0098\u009d\u0001\u0000\u0000\u0000"+
		"\u0099\u009a\u0003\u0016\u000b\u0000\u009a\u009b\u0003\u0012\t\u0000\u009b"+
		"\u009d\u0001\u0000\u0000\u0000\u009c\u0098\u0001\u0000\u0000\u0000\u009c"+
		"\u0099\u0001\u0000\u0000\u0000\u009d\u0011\u0001\u0000\u0000\u0000\u009e"+
		"\u00a4\u0001\u0000\u0000\u0000\u009f\u00a0\u0005\u001d\u0000\u0000\u00a0"+
		"\u00a1\u0003\u0016\u000b\u0000\u00a1\u00a2\u0003\u0012\t\u0000\u00a2\u00a4"+
		"\u0001\u0000\u0000\u0000\u00a3\u009e\u0001\u0000\u0000\u0000\u00a3\u009f"+
		"\u0001\u0000\u0000\u0000\u00a4\u0013\u0001\u0000\u0000\u0000\u00a5\u00a9"+
		"\u0001\u0000\u0000\u0000\u00a6\u00a7\u0005\u001e\u0000\u0000\u00a7\u00a9"+
		"\u0003\f\u0006\u0000\u00a8\u00a5\u0001\u0000\u0000\u0000\u00a8\u00a6\u0001"+
		"\u0000\u0000\u0000\u00a9\u0015\u0001\u0000\u0000\u0000\u00aa\u00ab\u0005"+
		"\u001a\u0000\u0000\u00ab\u00ac\u0005\u001e\u0000\u0000\u00ac\u00ad\u0003"+
		"\f\u0006\u0000\u00ad\u0017\u0001\u0000\u0000\u0000\u00ae\u00af\u0003\u001c"+
		"\u000e\u0000\u00af\u00b0\u0003\u001a\r\u0000\u00b0\u0019\u0001\u0000\u0000"+
		"\u0000\u00b1\u00b4\u0001\u0000\u0000\u0000\u00b2\u00b4\u0003\u0018\f\u0000"+
		"\u00b3\u00b1\u0001\u0000\u0000\u0000\u00b3\u00b2\u0001\u0000\u0000\u0000"+
		"\u00b4\u001b\u0001\u0000\u0000\u0000\u00b5\u00b6\u0005\u001a\u0000\u0000"+
		"\u00b6\u00d7\u0003\u001e\u000f\u0000\u00b7\u00d7\u0003\"\u0011\u0000\u00b8"+
		"\u00b9\u0005\u0012\u0000\u0000\u00b9\u00ba\u0003&\u0013\u0000\u00ba\u00bb"+
		"\u0005\u0007\u0000\u0000\u00bb\u00bc\u0003\u0018\f\u0000\u00bc\u00bd\u0005"+
		"\u0016\u0000\u0000\u00bd\u00be\u0005\u001f\u0000\u0000\u00be\u00d7\u0001"+
		"\u0000\u0000\u0000\u00bf\u00c0\u0005\n\u0000\u0000\u00c0\u00c1\u0005\u001a"+
		"\u0000\u0000\u00c1\u00c2\u00050\u0000\u0000\u00c2\u00c3\u0003&\u0013\u0000"+
		"\u00c3\u00c4\u0005\u0010\u0000\u0000\u00c4\u00c5\u0003&\u0013\u0000\u00c5"+
		"\u00c6\u0005\u0007\u0000\u0000\u00c6\u00c7\u0003\u0018\f\u0000\u00c7\u00c8"+
		"\u0005\u0016\u0000\u0000\u00c8\u00c9\u0005\u001f\u0000\u0000\u00c9\u00d7"+
		"\u0001\u0000\u0000\u0000\u00ca\u00cb\u0005\u0006\u0000\u0000\u00cb\u00d7"+
		"\u0005\u001f\u0000\u0000\u00cc\u00cd\u0005\u0017\u0000\u0000\u00cd\u00ce"+
		"\u0003&\u0013\u0000\u00ce\u00cf\u0005\u001f\u0000\u0000\u00cf\u00d7\u0001"+
		"\u0000\u0000\u0000\u00d0\u00d1\u0005\f\u0000\u0000\u00d1\u00d2\u0003\u0002"+
		"\u0001\u0000\u00d2\u00d3\u0005\r\u0000\u0000\u00d3\u00d4\u0003\u0018\f"+
		"\u0000\u00d4\u00d5\u0005\u0015\u0000\u0000\u00d5\u00d7\u0001\u0000\u0000"+
		"\u0000\u00d6\u00b5\u0001\u0000\u0000\u0000\u00d6\u00b7\u0001\u0000\u0000"+
		"\u0000\u00d6\u00b8\u0001\u0000\u0000\u0000\u00d6\u00bf\u0001\u0000\u0000"+
		"\u0000\u00d6\u00ca\u0001\u0000\u0000\u0000\u00d6\u00cc\u0001\u0000\u0000"+
		"\u0000\u00d6\u00d0\u0001\u0000\u0000\u0000\u00d7\u001d\u0001\u0000\u0000"+
		"\u0000\u00d8\u00d9\u0003`0\u0000\u00d9\u00da\u00050\u0000\u0000\u00da"+
		"\u00db\u0003 \u0010\u0000\u00db\u00e2\u0001\u0000\u0000\u0000\u00dc\u00dd"+
		"\u0005 \u0000\u0000\u00dd\u00de\u0003Z-\u0000\u00de\u00df\u0005!\u0000"+
		"\u0000\u00df\u00e0\u0005\u001f\u0000\u0000\u00e0\u00e2\u0001\u0000\u0000"+
		"\u0000\u00e1\u00d8\u0001\u0000\u0000\u0000\u00e1\u00dc\u0001\u0000\u0000"+
		"\u0000\u00e2\u001f\u0001\u0000\u0000\u0000\u00e3\u00e4\u0003&\u0013\u0000"+
		"\u00e4\u00e5\u0005\u001f\u0000\u0000\u00e5!\u0001\u0000\u0000\u0000\u00e6"+
		"\u00e7\u0005\b\u0000\u0000\u00e7\u00e8\u0003&\u0013\u0000\u00e8\u00e9"+
		"\u0005\u000f\u0000\u0000\u00e9\u00ea\u0003\u0018\f\u0000\u00ea\u00eb\u0003"+
		"$\u0012\u0000\u00eb#\u0001\u0000\u0000\u0000\u00ec\u00ed\u0005\u0013\u0000"+
		"\u0000\u00ed\u00f4\u0005\u001f\u0000\u0000\u00ee\u00ef\u0005\t\u0000\u0000"+
		"\u00ef\u00f0\u0003\u0018\f\u0000\u00f0\u00f1\u0005\u0013\u0000\u0000\u00f1"+
		"\u00f2\u0005\u001f\u0000\u0000\u00f2\u00f4\u0001\u0000\u0000\u0000\u00f3"+
		"\u00ec\u0001\u0000\u0000\u0000\u00f3\u00ee\u0001\u0000\u0000\u0000\u00f4"+
		"%\u0001\u0000\u0000\u0000\u00f5\u00f6\u0003(\u0014\u0000\u00f6\'\u0001"+
		"\u0000\u0000\u0000\u00f7\u00f8\u0003,\u0016\u0000\u00f8\u00f9\u0003*\u0015"+
		"\u0000\u00f9)\u0001\u0000\u0000\u0000\u00fa\u00fb\u0005/\u0000\u0000\u00fb"+
		"\u00fe\u0003(\u0014\u0000\u00fc\u00fe\u0001\u0000\u0000\u0000\u00fd\u00fa"+
		"\u0001\u0000\u0000\u0000\u00fd\u00fc\u0001\u0000\u0000\u0000\u00fe+\u0001"+
		"\u0000\u0000\u0000\u00ff\u0100\u00030\u0018\u0000\u0100\u0101\u0003.\u0017"+
		"\u0000\u0101-\u0001\u0000\u0000\u0000\u0102\u0103\u0005.\u0000\u0000\u0103"+
		"\u0106\u0003,\u0016\u0000\u0104\u0106\u0001\u0000\u0000\u0000\u0105\u0102"+
		"\u0001\u0000\u0000\u0000\u0105\u0104\u0001\u0000\u0000\u0000\u0106/\u0001"+
		"\u0000\u0000\u0000\u0107\u0108\u00034\u001a\u0000\u0108\u0109\u00032\u0019"+
		"\u0000\u01091\u0001\u0000\u0000\u0000\u010a\u010b\u0005,\u0000\u0000\u010b"+
		"\u010e\u00030\u0018\u0000\u010c\u010e\u0001\u0000\u0000\u0000\u010d\u010a"+
		"\u0001\u0000\u0000\u0000\u010d\u010c\u0001\u0000\u0000\u0000\u010e3\u0001"+
		"\u0000\u0000\u0000\u010f\u0110\u00038\u001c\u0000\u0110\u0111\u00036\u001b"+
		"\u0000\u01115\u0001\u0000\u0000\u0000\u0112\u0113\u0005-\u0000\u0000\u0113"+
		"\u0116\u00034\u001a\u0000\u0114\u0116\u0001\u0000\u0000\u0000\u0115\u0112"+
		"\u0001\u0000\u0000\u0000\u0115\u0114\u0001\u0000\u0000\u0000\u01167\u0001"+
		"\u0000\u0000\u0000\u0117\u0118\u0003<\u001e\u0000\u0118\u0119\u0003:\u001d"+
		"\u0000\u01199\u0001\u0000\u0000\u0000\u011a\u011b\u0005*\u0000\u0000\u011b"+
		"\u011e\u00038\u001c\u0000\u011c\u011e\u0001\u0000\u0000\u0000\u011d\u011a"+
		"\u0001\u0000\u0000\u0000\u011d\u011c\u0001\u0000\u0000\u0000\u011e;\u0001"+
		"\u0000\u0000\u0000\u011f\u0120\u0003@ \u0000\u0120\u0121\u0003>\u001f"+
		"\u0000\u0121=\u0001\u0000\u0000\u0000\u0122\u0123\u0005+\u0000\u0000\u0123"+
		"\u0126\u0003<\u001e\u0000\u0124\u0126\u0001\u0000\u0000\u0000\u0125\u0122"+
		"\u0001\u0000\u0000\u0000\u0125\u0124\u0001\u0000\u0000\u0000\u0126?\u0001"+
		"\u0000\u0000\u0000\u0127\u0128\u0003D\"\u0000\u0128\u0129\u0003B!\u0000"+
		"\u0129A\u0001\u0000\u0000\u0000\u012a\u012b\u0005)\u0000\u0000\u012b\u012e"+
		"\u0003@ \u0000\u012c\u012e\u0001\u0000\u0000\u0000\u012d\u012a\u0001\u0000"+
		"\u0000\u0000\u012d\u012c\u0001\u0000\u0000\u0000\u012eC\u0001\u0000\u0000"+
		"\u0000\u012f\u0130\u0003H$\u0000\u0130\u0131\u0003F#\u0000\u0131E\u0001"+
		"\u0000\u0000\u0000\u0132\u0133\u0005(\u0000\u0000\u0133\u0136\u0003D\""+
		"\u0000\u0134\u0136\u0001\u0000\u0000\u0000\u0135\u0132\u0001\u0000\u0000"+
		"\u0000\u0135\u0134\u0001\u0000\u0000\u0000\u0136G\u0001\u0000\u0000\u0000"+
		"\u0137\u0138\u0003L&\u0000\u0138\u0139\u0003J%\u0000\u0139I\u0001\u0000"+
		"\u0000\u0000\u013a\u013b\u0005%\u0000\u0000\u013b\u013e\u0003H$\u0000"+
		"\u013c\u013e\u0001\u0000\u0000\u0000\u013d\u013a\u0001\u0000\u0000\u0000"+
		"\u013d\u013c\u0001\u0000\u0000\u0000\u013eK\u0001\u0000\u0000\u0000\u013f"+
		"\u0140\u0003P(\u0000\u0140\u0141\u0003N\'\u0000\u0141M\u0001\u0000\u0000"+
		"\u0000\u0142\u0143\u0005$\u0000\u0000\u0143\u0146\u0003L&\u0000\u0144"+
		"\u0146\u0001\u0000\u0000\u0000\u0145\u0142\u0001\u0000\u0000\u0000\u0145"+
		"\u0144\u0001\u0000\u0000\u0000\u0146O\u0001\u0000\u0000\u0000\u0147\u0148"+
		"\u0003T*\u0000\u0148\u0149\u0003R)\u0000\u0149Q\u0001\u0000\u0000\u0000"+
		"\u014a\u014b\u0005\'\u0000\u0000\u014b\u014e\u0003P(\u0000\u014c\u014e"+
		"\u0001\u0000\u0000\u0000\u014d\u014a\u0001\u0000\u0000\u0000\u014d\u014c"+
		"\u0001\u0000\u0000\u0000\u014eS\u0001\u0000\u0000\u0000\u014f\u0150\u0003"+
		"X,\u0000\u0150\u0151\u0003V+\u0000\u0151U\u0001\u0000\u0000\u0000\u0152"+
		"\u0153\u0005&\u0000\u0000\u0153\u0156\u0003T*\u0000\u0154\u0156\u0001"+
		"\u0000\u0000\u0000\u0155\u0152\u0001\u0000\u0000\u0000\u0155\u0154\u0001"+
		"\u0000\u0000\u0000\u0156W\u0001\u0000\u0000\u0000\u0157\u015f\u0005\u001b"+
		"\u0000\u0000\u0158\u0159\u0005\u001a\u0000\u0000\u0159\u015f\u0003^/\u0000"+
		"\u015a\u015b\u0005 \u0000\u0000\u015b\u015c\u0003&\u0013\u0000\u015c\u015d"+
		"\u0005!\u0000\u0000\u015d\u015f\u0001\u0000\u0000\u0000\u015e\u0157\u0001"+
		"\u0000\u0000\u0000\u015e\u0158\u0001\u0000\u0000\u0000\u015e\u015a\u0001"+
		"\u0000\u0000\u0000\u015fY\u0001\u0000\u0000\u0000\u0160\u0165\u0001\u0000"+
		"\u0000\u0000\u0161\u0162\u0003&\u0013\u0000\u0162\u0163\u0003\\.\u0000"+
		"\u0163\u0165\u0001\u0000\u0000\u0000\u0164\u0160\u0001\u0000\u0000\u0000"+
		"\u0164\u0161\u0001\u0000\u0000\u0000\u0165[\u0001\u0000\u0000\u0000\u0166"+
		"\u0167\u0005\u001d\u0000\u0000\u0167\u0168\u0003&\u0013\u0000\u0168\u0169"+
		"\u0003\\.\u0000\u0169\u016c\u0001\u0000\u0000\u0000\u016a\u016c\u0001"+
		"\u0000\u0000\u0000\u016b\u0166\u0001\u0000\u0000\u0000\u016b\u016a\u0001"+
		"\u0000\u0000\u0000\u016c]\u0001\u0000\u0000\u0000\u016d\u016e\u0005\""+
		"\u0000\u0000\u016e\u016f\u0003&\u0013\u0000\u016f\u0170\u0005#\u0000\u0000"+
		"\u0170\u0177\u0001\u0000\u0000\u0000\u0171\u0172\u0005 \u0000\u0000\u0172"+
		"\u0173\u0003Z-\u0000\u0173\u0174\u0005!\u0000\u0000\u0174\u0177\u0001"+
		"\u0000\u0000\u0000\u0175\u0177\u0001\u0000\u0000\u0000\u0176\u016d\u0001"+
		"\u0000\u0000\u0000\u0176\u0171\u0001\u0000\u0000\u0000\u0176\u0175\u0001"+
		"\u0000\u0000\u0000\u0177_\u0001\u0000\u0000\u0000\u0178\u0179\u0005\""+
		"\u0000\u0000\u0179\u017a\u0003&\u0013\u0000\u017a\u017b\u0005#\u0000\u0000"+
		"\u017b\u017e\u0001\u0000\u0000\u0000\u017c\u017e\u0001\u0000\u0000\u0000"+
		"\u017d\u0178\u0001\u0000\u0000\u0000\u017d\u017c\u0001\u0000\u0000\u0000"+
		"\u017ea\u0001\u0000\u0000\u0000\u001cq~\u0091\u0096\u009c\u00a3\u00a8"+
		"\u00b3\u00d6\u00e1\u00f3\u00fd\u0105\u010d\u0115\u011d\u0125\u012d\u0135"+
		"\u013d\u0145\u014d\u0155\u015e\u0164\u016b\u0176\u017d";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}