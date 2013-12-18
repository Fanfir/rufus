/*
 * Rufus: The Reliable USB Formatting Utility
 * Localization tables - autogenerated from resource.h
 * Copyright © 2013 Pete Batard <pete@akeo.ie>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <windows.h>
#include "resource.h"
#include "localization.h"

#define LOC_CTRL(x)  { #x, x }
#define LOC_DLG(x)   { x, NULL, {NULL, NULL} }

// Control IDs
const loc_control_id control_id[] = {
	// The dialog IDs must come first
	LOC_CTRL(IDD_DIALOG),
	LOC_CTRL(IDD_ABOUTBOX),
	LOC_CTRL(IDD_NOTIFICATION),
	LOC_CTRL(IDD_LICENSE),
	LOC_CTRL(IDD_ISO_EXTRACT),
	LOC_CTRL(IDD_LOG),
	LOC_CTRL(IDD_UPDATE_POLICY),
	LOC_CTRL(IDD_NEW_VERSION),
	LOC_CTRL(IDC_DEVICE),
	LOC_CTRL(IDC_FILESYSTEM),
	LOC_CTRL(IDC_START),
	LOC_CTRL(IDC_PARTITION_TYPE),
	LOC_CTRL(IDC_CLUSTERSIZE),
	LOC_CTRL(IDC_STATUS),
	LOC_CTRL(IDC_ABOUT),
	LOC_CTRL(IDC_LABEL),
	LOC_CTRL(IDC_QUICKFORMAT),
	LOC_CTRL(IDC_BOOT),
	LOC_CTRL(IDC_BADBLOCKS),
	LOC_CTRL(IDC_PROGRESS),
	LOC_CTRL(IDC_BOOTTYPE),
	LOC_CTRL(IDC_NBPASSES),
	LOC_CTRL(IDC_TEST),
	LOC_CTRL(IDC_SELECT_ISO),
	LOC_CTRL(IDC_SET_ICON),
	LOC_CTRL(IDC_RUFUS_MBR),
	LOC_CTRL(IDC_ISO_FILENAME),
	LOC_CTRL(IDC_ISO_ABORT),
	LOC_CTRL(IDC_DISK_ID),
	LOC_CTRL(IDC_EXTRA_PARTITION),
	LOC_CTRL(IDC_ENABLE_FIXED_DISKS),
	LOC_CTRL(IDC_ABOUT_LICENSE),
	LOC_CTRL(IDC_ABOUT_ICON),
	LOC_CTRL(IDC_ABOUT_UPDATES),
	LOC_CTRL(IDC_ABOUT_COPYRIGHTS),
	LOC_CTRL(IDC_ABOUT_BLURB),
	LOC_CTRL(IDC_LICENSE_TEXT),
	LOC_CTRL(IDC_NOTIFICATION_ICON),
	LOC_CTRL(IDC_NOTIFICATION_TEXT),
	LOC_CTRL(IDC_NOTIFICATION_LINE),
	LOC_CTRL(IDC_ADVANCED),
	LOC_CTRL(IDS_ADVANCED_OPTIONS_GRP),
	LOC_CTRL(IDC_LOG),
	LOC_CTRL(IDC_LANG),
	LOC_CTRL(IDC_LOG_EDIT),
	LOC_CTRL(IDC_LOG_SAVE),
	LOC_CTRL(IDC_LOG_CLEAR),
	LOC_CTRL(IDC_MORE_INFO),
	LOC_CTRL(IDC_POLICY),
	LOC_CTRL(IDC_UPDATE_FREQUENCY),
	LOC_CTRL(IDC_INCLUDE_BETAS),
	LOC_CTRL(IDC_RELEASE_NOTES),
	LOC_CTRL(IDC_DOWNLOAD),
	LOC_CTRL(IDC_CHECK_NOW),
	LOC_CTRL(IDC_WEBSITE),
	LOC_CTRL(IDC_YOUR_VERSION),
	LOC_CTRL(IDC_LATEST_VERSION),
	LOC_CTRL(IDC_DOWNLOAD_URL),
	LOC_CTRL(IDS_DEVICE_TXT),
	LOC_CTRL(IDS_PARTITION_TYPE_TXT),
	LOC_CTRL(IDS_FILESYSTEM_TXT),
	LOC_CTRL(IDS_CLUSTERSIZE_TXT),
	LOC_CTRL(IDS_LABEL_TXT),
	LOC_CTRL(IDS_FORMAT_OPTIONS_GRP),
	LOC_CTRL(IDS_UPDATE_SETTINGS_GRP),
	LOC_CTRL(IDS_UPDATE_FREQUENCY_TXT),
	LOC_CTRL(IDS_INCLUDE_BETAS_TXT),
	LOC_CTRL(IDS_NEW_VERSION_AVAIL_TXT),
	LOC_CTRL(IDS_NEW_VERSION_DOWNLOAD_GRP),
	LOC_CTRL(IDS_NEW_VERSION_NOTES_GRP),
	LOC_CTRL(IDS_CHECK_NOW_GRP),
	LOC_CTRL(MSG_000),
	LOC_CTRL(MSG_001),
	LOC_CTRL(MSG_002),
	LOC_CTRL(MSG_003),
	LOC_CTRL(MSG_004),
	LOC_CTRL(MSG_005),
	LOC_CTRL(MSG_006),
	LOC_CTRL(MSG_007),
	LOC_CTRL(MSG_008),
	LOC_CTRL(MSG_009),
	LOC_CTRL(MSG_010),
	LOC_CTRL(MSG_011),
	LOC_CTRL(MSG_012),
	LOC_CTRL(MSG_013),
	LOC_CTRL(MSG_014),
	LOC_CTRL(MSG_015),
	LOC_CTRL(MSG_016),
	LOC_CTRL(MSG_017),
	LOC_CTRL(MSG_018),
	LOC_CTRL(MSG_019),
	LOC_CTRL(MSG_020),
	LOC_CTRL(MSG_021),
	LOC_CTRL(MSG_022),
	LOC_CTRL(MSG_023),
	LOC_CTRL(MSG_024),
	LOC_CTRL(MSG_025),
	LOC_CTRL(MSG_026),
	LOC_CTRL(MSG_027),
	LOC_CTRL(MSG_028),
	LOC_CTRL(MSG_029),
	LOC_CTRL(MSG_030),
	LOC_CTRL(MSG_031),
	LOC_CTRL(MSG_032),
	LOC_CTRL(MSG_033),
	LOC_CTRL(MSG_034),
	LOC_CTRL(MSG_035),
	LOC_CTRL(MSG_036),
	LOC_CTRL(MSG_037),
	LOC_CTRL(MSG_038),
	LOC_CTRL(MSG_039),
	LOC_CTRL(MSG_040),
	LOC_CTRL(MSG_041),
	LOC_CTRL(MSG_042),
	LOC_CTRL(MSG_043),
	LOC_CTRL(MSG_044),
	LOC_CTRL(MSG_045),
	LOC_CTRL(MSG_046),
	LOC_CTRL(MSG_047),
	LOC_CTRL(MSG_048),
	LOC_CTRL(MSG_049),
	LOC_CTRL(MSG_050),
	LOC_CTRL(MSG_051),
	LOC_CTRL(MSG_052),
	LOC_CTRL(MSG_053),
	LOC_CTRL(MSG_054),
	LOC_CTRL(MSG_055),
	LOC_CTRL(MSG_056),
	LOC_CTRL(MSG_057),
	LOC_CTRL(MSG_058),
	LOC_CTRL(MSG_059),
	LOC_CTRL(MSG_060),
	LOC_CTRL(MSG_061),
	LOC_CTRL(MSG_062),
	LOC_CTRL(MSG_063),
	LOC_CTRL(MSG_064),
	LOC_CTRL(MSG_065),
	LOC_CTRL(MSG_066),
	LOC_CTRL(MSG_067),
	LOC_CTRL(MSG_068),
	LOC_CTRL(MSG_069),
	LOC_CTRL(MSG_070),
	LOC_CTRL(MSG_071),
	LOC_CTRL(MSG_072),
	LOC_CTRL(MSG_073),
	LOC_CTRL(MSG_074),
	LOC_CTRL(MSG_075),
	LOC_CTRL(MSG_076),
	LOC_CTRL(MSG_077),
	LOC_CTRL(MSG_078),
	LOC_CTRL(MSG_079),
	LOC_CTRL(MSG_080),
	LOC_CTRL(MSG_081),
	LOC_CTRL(MSG_082),
	LOC_CTRL(MSG_083),
	LOC_CTRL(MSG_084),
	LOC_CTRL(MSG_085),
	LOC_CTRL(MSG_086),
	LOC_CTRL(MSG_087),
	LOC_CTRL(MSG_088),
	LOC_CTRL(MSG_089),
	LOC_CTRL(MSG_090),
	LOC_CTRL(MSG_091),
	LOC_CTRL(MSG_092),
	LOC_CTRL(MSG_093),
	LOC_CTRL(MSG_094),
	LOC_CTRL(MSG_095),
	LOC_CTRL(MSG_096),
	LOC_CTRL(MSG_097),
	LOC_CTRL(MSG_098),
	LOC_CTRL(MSG_099),
	LOC_CTRL(MSG_100),
	LOC_CTRL(MSG_101),
	LOC_CTRL(MSG_102),
	LOC_CTRL(MSG_103),
	LOC_CTRL(MSG_104),
	LOC_CTRL(MSG_105),
	LOC_CTRL(MSG_106),
	LOC_CTRL(MSG_107),
	LOC_CTRL(MSG_108),
	LOC_CTRL(MSG_109),
	LOC_CTRL(MSG_110),
	LOC_CTRL(MSG_111),
	LOC_CTRL(MSG_112),
	LOC_CTRL(MSG_113),
	LOC_CTRL(MSG_114),
	LOC_CTRL(MSG_115),
	LOC_CTRL(MSG_116),
	LOC_CTRL(MSG_117),
	LOC_CTRL(MSG_118),
	LOC_CTRL(MSG_119),
	LOC_CTRL(MSG_120),
	LOC_CTRL(MSG_121),
	LOC_CTRL(MSG_122),
	LOC_CTRL(MSG_123),
	LOC_CTRL(MSG_124),
	LOC_CTRL(MSG_125),
	LOC_CTRL(MSG_126),
	LOC_CTRL(MSG_127),
	LOC_CTRL(MSG_128),
	LOC_CTRL(MSG_129),
	LOC_CTRL(MSG_130),
	LOC_CTRL(MSG_131),
	LOC_CTRL(MSG_132),
	LOC_CTRL(MSG_133),
	LOC_CTRL(MSG_134),
	LOC_CTRL(MSG_135),
	LOC_CTRL(MSG_136),
	LOC_CTRL(MSG_137),
	LOC_CTRL(MSG_138),
	LOC_CTRL(MSG_139),
	LOC_CTRL(MSG_140),
	LOC_CTRL(MSG_141),
	LOC_CTRL(MSG_142),
	LOC_CTRL(MSG_143),
	LOC_CTRL(MSG_144),
	LOC_CTRL(MSG_145),
	LOC_CTRL(MSG_146),
	LOC_CTRL(MSG_147),
	LOC_CTRL(MSG_148),
	LOC_CTRL(MSG_149),
	LOC_CTRL(MSG_150),
	LOC_CTRL(MSG_151),
	LOC_CTRL(MSG_152),
	LOC_CTRL(MSG_153),
	LOC_CTRL(MSG_154),
	LOC_CTRL(MSG_155),
	LOC_CTRL(MSG_156),
	LOC_CTRL(MSG_157),
	LOC_CTRL(MSG_158),
	LOC_CTRL(MSG_159),
	LOC_CTRL(MSG_160),
	LOC_CTRL(MSG_161),
	LOC_CTRL(MSG_162),
	LOC_CTRL(MSG_163),
	LOC_CTRL(MSG_164),
	LOC_CTRL(MSG_165),
	LOC_CTRL(MSG_166),
	LOC_CTRL(MSG_167),
	LOC_CTRL(MSG_168),
	LOC_CTRL(MSG_169),
	LOC_CTRL(MSG_170),
	LOC_CTRL(MSG_171),
	LOC_CTRL(MSG_172),
	LOC_CTRL(MSG_173),
	LOC_CTRL(MSG_174),
	LOC_CTRL(MSG_175),
	LOC_CTRL(MSG_176),
	LOC_CTRL(MSG_177),
	LOC_CTRL(MSG_178),
	LOC_CTRL(MSG_179),
	LOC_CTRL(MSG_180),
	LOC_CTRL(MSG_181),
	LOC_CTRL(MSG_182),
	LOC_CTRL(MSG_183),
	LOC_CTRL(MSG_184),
	LOC_CTRL(MSG_185),
	LOC_CTRL(MSG_186),
	LOC_CTRL(MSG_187),
	LOC_CTRL(MSG_188),
	LOC_CTRL(MSG_189),
	LOC_CTRL(MSG_190),
	LOC_CTRL(MSG_191),
	LOC_CTRL(MSG_192),
	LOC_CTRL(MSG_193),
	LOC_CTRL(MSG_194),
	LOC_CTRL(MSG_195),
	LOC_CTRL(MSG_196),
	LOC_CTRL(MSG_197),
	LOC_CTRL(MSG_198),
	LOC_CTRL(MSG_199),
	LOC_CTRL(MSG_200),
	LOC_CTRL(MSG_201),
	LOC_CTRL(MSG_202),
	LOC_CTRL(MSG_203),
	LOC_CTRL(MSG_204),
	LOC_CTRL(MSG_205),
	LOC_CTRL(MSG_206),
	LOC_CTRL(MSG_207),
	LOC_CTRL(MSG_208),
	LOC_CTRL(MSG_209),
	LOC_CTRL(MSG_210),
	LOC_CTRL(MSG_211),
	LOC_CTRL(MSG_212),
	LOC_CTRL(MSG_213),
	LOC_CTRL(MSG_214),
	LOC_CTRL(MSG_215),
	LOC_CTRL(MSG_216),
	LOC_CTRL(MSG_217),
	LOC_CTRL(MSG_218),
	LOC_CTRL(MSG_219),
	LOC_CTRL(MSG_220),
	LOC_CTRL(MSG_221),
	LOC_CTRL(MSG_222),
	LOC_CTRL(MSG_223),
	LOC_CTRL(MSG_224),
	LOC_CTRL(MSG_225),
	LOC_CTRL(MSG_226),
	LOC_CTRL(MSG_227),
	LOC_CTRL(MSG_228),
	LOC_CTRL(MSG_229),
	LOC_CTRL(MSG_230),
	LOC_CTRL(MSG_231),
	LOC_CTRL(MSG_232),
	LOC_CTRL(MSG_233),
	LOC_CTRL(MSG_234),
	LOC_CTRL(MSG_235),
	LOC_CTRL(MSG_236),
	LOC_CTRL(MSG_237),
	LOC_CTRL(MSG_238),
	LOC_CTRL(MSG_239),
	LOC_CTRL(MSG_240),
	LOC_CTRL(MSG_241),
	LOC_CTRL(MSG_242),
	LOC_CTRL(MSG_243),
	LOC_CTRL(MSG_244),
	LOC_CTRL(MSG_245),
	LOC_CTRL(MSG_246),
	LOC_CTRL(MSG_247),
	LOC_CTRL(MSG_248),
	LOC_CTRL(MSG_249),
	LOC_CTRL(MSG_250),
	LOC_CTRL(MSG_251),
	LOC_CTRL(MSG_252),
	LOC_CTRL(MSG_253),
	LOC_CTRL(MSG_254),
	LOC_CTRL(MSG_255),
	LOC_CTRL(MSG_256),
	LOC_CTRL(MSG_257),
	LOC_CTRL(MSG_258),
	LOC_CTRL(MSG_259),
	LOC_CTRL(MSG_MAX),
	LOC_CTRL(IDOK),
	LOC_CTRL(IDCANCEL),
	LOC_CTRL(IDABORT),
	LOC_CTRL(IDRETRY),
	LOC_CTRL(IDIGNORE),
	LOC_CTRL(IDYES),
	LOC_CTRL(IDNO),
	LOC_CTRL(IDCLOSE),
	LOC_CTRL(IDHELP),
};

// Dialog data
loc_dlg_list loc_dlg[] = {
	LOC_DLG(IDD_DIALOG),
	LOC_DLG(IDD_ABOUTBOX),
	LOC_DLG(IDD_NOTIFICATION),
	LOC_DLG(IDD_LICENSE),
	LOC_DLG(IDD_ISO_EXTRACT),
	LOC_DLG(IDD_LOG),
	LOC_DLG(IDD_UPDATE_POLICY),
	LOC_DLG(IDD_NEW_VERSION),
};
