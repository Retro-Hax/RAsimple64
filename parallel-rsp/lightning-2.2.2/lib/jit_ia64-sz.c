#if __WORDSIZE == 64
#define JIT_INSTR_MAX 144
    0,	/* data */
    0,	/* live */
    32,	/* align */
    0,	/* save */
    0,	/* load */
    16,	/* skip */
    0,	/* #name */
    0,	/* #note */
    0,	/* label */
    80,	/* prolog */
    0,	/* ellipsis */
    0,	/* va_push */
    0,	/* allocai */
    0,	/* allocar */
    0,	/* arg_c */
    0,	/* arg_s */
    0,	/* arg_i */
    0,	/* arg_l */
    0,	/* getarg_c */
    0,	/* getarg_uc */
    0,	/* getarg_s */
    0,	/* getarg_us */
    0,	/* getarg_i */
    0,	/* getarg_ui */
    0,	/* getarg_l */
    0,	/* putargr_c */
    0,	/* putargi_c */
    0,	/* putargr_uc */
    0,	/* putargi_uc */
    0,	/* putargr_s */
    0,	/* putargi_s */
    0,	/* putargr_us */
    0,	/* putargi_us */
    0,	/* putargr_i */
    0,	/* putargi_i */
    0,	/* putargr_ui */
    0,	/* putargi_ui */
    0,	/* putargr_l */
    0,	/* putargi_l */
    16,	/* va_start */
    16,	/* va_arg */
    16,	/* va_arg_d */
    0,	/* va_end */
    16,	/* addr */
    16,	/* addi */
    16,	/* addcr */
    32,	/* addci */
    32,	/* addxr */
    32,	/* addxi */
    16,	/* subr */
    16,	/* subi */
    16,	/* subcr */
    32,	/* subci */
    32,	/* subxr */
    32,	/* subxi */
    16,	/* rsbi */
    32,	/* mulr */
    32,	/* muli */
    48,	/* qmulr */
    48,	/* qmuli */
    48,	/* qmulr_u */
    48,	/* qmuli_u */
    32,	/* divr */
    48,	/* divi */
    32,	/* divr_u */
    48,	/* divi_u */
    64,	/* qdivr */
    64,	/* qdivi */
    64,	/* qdivr_u */
    64,	/* qdivi_u */
    32,	/* remr */
    48,	/* remi */
    32,	/* remr_u */
    48,	/* remi_u */
    16,	/* andr */
    16,	/* andi */
    16,	/* orr */
    16,	/* ori */
    16,	/* xorr */
    16,	/* xori */
    16,	/* lshr */
    16,	/* lshi */
    16,	/* rshr */
    16,	/* rshi */
    16,	/* rshr_u */
    16,	/* rshi_u */
    16,	/* negr */
    16,	/* negi */
    16,	/* comr */
    16,	/* comi */
    16,	/* ltr */
    16,	/* lti */
    16,	/* ltr_u */
    16,	/* lti_u */
    16,	/* ler */
    16,	/* lei */
    16,	/* ler_u */
    16,	/* lei_u */
    16,	/* eqr */
    16,	/* eqi */
    16,	/* ger */
    16,	/* gei */
    16,	/* ger_u */
    16,	/* gei_u */
    16,	/* gtr */
    16,	/* gti */
    16,	/* gtr_u */
    16,	/* gti_u */
    16,	/* ner */
    16,	/* nei */
    16,	/* movr */
    16,	/* movi */
    16,	/* movnr */
    16,	/* movzr */
    32,	/* casr */
    32,	/* casi */
    16,	/* extr_c */
    16,	/* exti_c */
    16,	/* extr_uc */
    16,	/* exti_uc */
    16,	/* extr_s */
    16,	/* exti_s */
    16,	/* extr_us */
    16,	/* exti_us */
    16,	/* extr_i */
    16,	/* exti_i */
    16,	/* extr_ui */
    16,	/* exti_ui */
    16,	/* bswapr_us */
    16,	/* bswapi_us */
    16,	/* bswapr_ui */
    16,	/* bswapi_ui */
    16,	/* bswapr_ul */
    16,	/* bswapi_ul */
    16,	/* htonr_us */
    16,	/* htoni_us */
    16,	/* htonr_ui */
    16,	/* htoni_ui */
    16,	/* htonr_ul */
    16,	/* htoni_ul */
    16,	/* ldr_c */
    16,	/* ldi_c */
    16,	/* ldr_uc */
    16,	/* ldi_uc */
    16,	/* ldr_s */
    16,	/* ldi_s */
    16,	/* ldr_us */
    16,	/* ldi_us */
    16,	/* ldr_i */
    16,	/* ldi_i */
    16,	/* ldr_ui */
    16,	/* ldi_ui */
    16,	/* ldr_l */
    16,	/* ldi_l */
    16,	/* ldxr_c */
    32,	/* ldxi_c */
    16,	/* ldxr_uc */
    16,	/* ldxi_uc */
    16,	/* ldxr_s */
    32,	/* ldxi_s */
    16,	/* ldxr_us */
    16,	/* ldxi_us */
    16,	/* ldxr_i */
    32,	/* ldxi_i */
    16,	/* ldxr_ui */
    16,	/* ldxi_ui */
    16,	/* ldxr_l */
    16,	/* ldxi_l */
    16,	/* str_c */
    16,	/* sti_c */
    16,	/* str_s */
    16,	/* sti_s */
    16,	/* str_i */
    16,	/* sti_i */
    16,	/* str_l */
    16,	/* sti_l */
    16,	/* stxr_c */
    16,	/* stxi_c */
    16,	/* stxr_s */
    16,	/* stxi_s */
    16,	/* stxr_i */
    16,	/* stxi_i */
    16,	/* stxr_l */
    16,	/* stxi_l */
    16,	/* bltr */
    16,	/* blti */
    16,	/* bltr_u */
    16,	/* blti_u */
    16,	/* bler */
    16,	/* blei */
    16,	/* bler_u */
    16,	/* blei_u */
    16,	/* beqr */
    32,	/* beqi */
    16,	/* bger */
    16,	/* bgei */
    16,	/* bger_u */
    16,	/* bgei_u */
    16,	/* bgtr */
    16,	/* bgti */
    16,	/* bgtr_u */
    16,	/* bgti_u */
    16,	/* bner */
    32,	/* bnei */
    16,	/* bmsr */
    32,	/* bmsi */
    16,	/* bmcr */
    32,	/* bmci */
    48,	/* boaddr */
    48,	/* boaddi */
    32,	/* boaddr_u */
    32,	/* boaddi_u */
    48,	/* bxaddr */
    48,	/* bxaddi */
    32,	/* bxaddr_u */
    32,	/* bxaddi_u */
    48,	/* bosubr */
    48,	/* bosubi */
    32,	/* bosubr_u */
    32,	/* bosubi_u */
    48,	/* bxsubr */
    48,	/* bxsubi */
    32,	/* bxsubr_u */
    32,	/* bxsubi_u */
    16,	/* jmpr */
    16,	/* jmpi */
    16,	/* callr */
    32,	/* calli */
    0,	/* prepare */
    0,	/* pushargr_c */
    0,	/* pushargi_c */
    0,	/* pushargr_uc */
    0,	/* pushargi_uc */
    0,	/* pushargr_s */
    0,	/* pushargi_s */
    0,	/* pushargr_us */
    0,	/* pushargi_us */
    0,	/* pushargr_i */
    0,	/* pushargi_i */
    0,	/* pushargr_ui */
    0,	/* pushargi_ui */
    0,	/* pushargr_l */
    0,	/* pushargi_l */
    0,	/* finishr */
    0,	/* finishi */
    0,	/* ret */
    0,	/* retr_c */
    0,	/* reti_c */
    0,	/* retr_uc */
    0,	/* reti_uc */
    0,	/* retr_s */
    0,	/* reti_s */
    0,	/* retr_us */
    0,	/* reti_us */
    0,	/* retr_i */
    0,	/* reti_i */
    0,	/* retr_ui */
    0,	/* reti_ui */
    0,	/* retr_l */
    0,	/* reti_l */
    0,	/* retval_c */
    0,	/* retval_uc */
    0,	/* retval_s */
    0,	/* retval_us */
    0,	/* retval_i */
    0,	/* retval_ui */
    0,	/* retval_l */
    48,	/* epilog */
    0,	/* arg_f */
    0,	/* getarg_f */
    0,	/* putargr_f */
    0,	/* putargi_f */
    16,	/* addr_f */
    32,	/* addi_f */
    16,	/* subr_f */
    32,	/* subi_f */
    32,	/* rsbi_f */
    16,	/* mulr_f */
    32,	/* muli_f */
    64,	/* divr_f */
    80,	/* divi_f */
    16,	/* negr_f */
    0,	/* negi_f */
    16,	/* absr_f */
    0,	/* absi_f */
    32,	/* sqrtr_f */
    0,	/* sqrti_f */
    16,	/* ltr_f */
    32,	/* lti_f */
    16,	/* ler_f */
    32,	/* lei_f */
    16,	/* eqr_f */
    32,	/* eqi_f */
    16,	/* ger_f */
    32,	/* gei_f */
    16,	/* gtr_f */
    32,	/* gti_f */
    16,	/* ner_f */
    32,	/* nei_f */
    16,	/* unltr_f */
    32,	/* unlti_f */
    16,	/* unler_f */
    32,	/* unlei_f */
    32,	/* uneqr_f */
    48,	/* uneqi_f */
    16,	/* unger_f */
    32,	/* ungei_f */
    16,	/* ungtr_f */
    32,	/* ungti_f */
    32,	/* ltgtr_f */
    48,	/* ltgti_f */
    16,	/* ordr_f */
    32,	/* ordi_f */
    16,	/* unordr_f */
    32,	/* unordi_f */
    16,	/* truncr_f_i */
    16,	/* truncr_f_l */
    32,	/* extr_f */
    16,	/* extr_d_f */
    16,	/* movr_f */
    16,	/* movi_f */
    16,	/* ldr_f */
    16,	/* ldi_f */
    16,	/* ldxr_f */
    16,	/* ldxi_f */
    16,	/* str_f */
    16,	/* sti_f */
    16,	/* stxr_f */
    16,	/* stxi_f */
    16,	/* bltr_f */
    32,	/* blti_f */
    16,	/* bler_f */
    32,	/* blei_f */
    16,	/* beqr_f */
    32,	/* beqi_f */
    16,	/* bger_f */
    32,	/* bgei_f */
    16,	/* bgtr_f */
    32,	/* bgti_f */
    16,	/* bner_f */
    32,	/* bnei_f */
    16,	/* bunltr_f */
    32,	/* bunlti_f */
    16,	/* bunler_f */
    32,	/* bunlei_f */
    32,	/* buneqr_f */
    48,	/* buneqi_f */
    16,	/* bunger_f */
    32,	/* bungei_f */
    16,	/* bungtr_f */
    32,	/* bungti_f */
    32,	/* bltgtr_f */
    48,	/* bltgti_f */
    16,	/* bordr_f */
    32,	/* bordi_f */
    16,	/* bunordr_f */
    32,	/* bunordi_f */
    0,	/* pushargr_f */
    0,	/* pushargi_f */
    0,	/* retr_f */
    0,	/* reti_f */
    0,	/* retval_f */
    0,	/* arg_d */
    0,	/* getarg_d */
    0,	/* putargr_d */
    0,	/* putargi_d */
    16,	/* addr_d */
    32,	/* addi_d */
    16,	/* subr_d */
    32,	/* subi_d */
    32,	/* rsbi_d */
    16,	/* mulr_d */
    32,	/* muli_d */
    64,	/* divr_d */
    80,	/* divi_d */
    16,	/* negr_d */
    0,	/* negi_d */
    16,	/* absr_d */
    0,	/* absi_d */
    32,	/* sqrtr_d */
    0,	/* sqrti_d */
    16,	/* ltr_d */
    32,	/* lti_d */
    16,	/* ler_d */
    32,	/* lei_d */
    16,	/* eqr_d */
    32,	/* eqi_d */
    16,	/* ger_d */
    32,	/* gei_d */
    16,	/* gtr_d */
    32,	/* gti_d */
    16,	/* ner_d */
    32,	/* nei_d */
    16,	/* unltr_d */
    32,	/* unlti_d */
    16,	/* unler_d */
    32,	/* unlei_d */
    32,	/* uneqr_d */
    48,	/* uneqi_d */
    16,	/* unger_d */
    32,	/* ungei_d */
    16,	/* ungtr_d */
    32,	/* ungti_d */
    32,	/* ltgtr_d */
    48,	/* ltgti_d */
    16,	/* ordr_d */
    32,	/* ordi_d */
    16,	/* unordr_d */
    32,	/* unordi_d */
    16,	/* truncr_d_i */
    16,	/* truncr_d_l */
    32,	/* extr_d */
    16,	/* extr_f_d */
    16,	/* movr_d */
    16,	/* movi_d */
    16,	/* ldr_d */
    16,	/* ldi_d */
    16,	/* ldxr_d */
    16,	/* ldxi_d */
    16,	/* str_d */
    16,	/* sti_d */
    16,	/* stxr_d */
    16,	/* stxi_d */
    16,	/* bltr_d */
    32,	/* blti_d */
    16,	/* bler_d */
    32,	/* blei_d */
    16,	/* beqr_d */
    32,	/* beqi_d */
    16,	/* bger_d */
    32,	/* bgei_d */
    16,	/* bgtr_d */
    32,	/* bgti_d */
    16,	/* bner_d */
    32,	/* bnei_d */
    16,	/* bunltr_d */
    32,	/* bunlti_d */
    16,	/* bunler_d */
    32,	/* bunlei_d */
    32,	/* buneqr_d */
    48,	/* buneqi_d */
    16,	/* bunger_d */
    32,	/* bungei_d */
    16,	/* bungtr_d */
    32,	/* bungti_d */
    32,	/* bltgtr_d */
    48,	/* bltgti_d */
    16,	/* bordr_d */
    32,	/* bordi_d */
    16,	/* bunordr_d */
    32,	/* bunordi_d */
    0,	/* pushargr_d */
    0,	/* pushargi_d */
    0,	/* retr_d */
    0,	/* reti_d */
    0,	/* retval_d */
    16,	/* movr_w_f */
    16,	/* movi_w_f */
    0,	/* movr_ww_d */
    0,	/* movi_ww_d */
    16,	/* movr_w_d */
    16,	/* movi_w_d */
    16,	/* movr_f_w */
    16,	/* movi_f_w */
    0,	/* movr_d_ww */
    0,	/* movi_d_ww */
    16,	/* movr_d_w */
    16,	/* movi_d_w */
    96,	/* clor */
    16,	/* cloi */
    64,	/* clzr */
    16,	/* clzi */
    64,	/* ctor */
    16,	/* ctoi */
    48,	/* ctzr */
    16,	/* ctzi */
    64,	/* rbitr */
    16,	/* rbiti */
    16,	/* popcntr */
    16,	/* popcnti */
    32,	/* lrotr */
    32,	/* lroti */
    32,	/* rrotr */
    32,	/* rroti */
    16,	/* extr */
    16,	/* exti */
    16,	/* extr_u */
    16,	/* exti_u */
    32,	/* depr */
    16,	/* depi */
    48,	/* qlshr */
    16,	/* qlshi */
    48,	/* qlshr_u */
    16,	/* qlshi_u */
    48,	/* qrshr */
    16,	/* qrshi */
    48,	/* qrshr_u */
    16,	/* qrshi_u */
    96,	/* unldr */
    48,	/* unldi */
    96,	/* unldr_u */
    48,	/* unldi_u */
    128,	/* unstr */
    96,	/* unsti */
    80,	/* unldr_x */
    48,	/* unldi_x */
    144,	/* unstr_x */
    112,	/* unsti_x */
    16,	/* fmar_f */
    0,	/* fmai_f */
    16,	/* fmsr_f */
    0,	/* fmsi_f */
    16,	/* fmar_d */
    0,	/* fmai_d */
    16,	/* fmsr_d */
    0,	/* fmsi_d */
    16,	/* fnmar_f */
    0,	/* fnmai_f */
    16,	/* fnmsr_f */
    0,	/* fnmsi_f */
    16,	/* fnmar_d */
    0,	/* fnmai_d */
    16,	/* fnmsr_d */
    0,	/* fnmsi_d */
#endif /* __WORDSIZE */
