export async function extract() {
    log.info(pkg.settings)
    if (pkg.settings.modules && pkg.settings.modules.length > 0) {
        await shell.exec(`.\\dist\\bin\\bcp.exe ${pkg.settings.modules.join(' ')} ${pkg.target}`)
    }
}

export async function checkout() {
    await git.checkout(pkg.hash!)
    if (fs.exists('b2.exe')) {        
        await shell.exec('.\\bootstrap.bat')
    }
    
    if (fs.exists('dist/bin/bcp.exe')) {       
        await shell.exec('.\\b2.exe -j 12 tools\\bcp')
    }
}
